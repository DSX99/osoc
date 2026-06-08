#include "emupp.h"
#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdint>

#define ILL_INST 2<<16
#define JUMP 1
#define NOJUMP 0

#define LB  0b00010
#define LH  0b00100
#define LW  0b00110

#define LBU 0b01010
#define LHU 0b01100

#define SB  0b10010
#define SH  0b10100
#define SW  0b10110

#define ADD 0
#define SUB 1
#define BEQ 2
#define BNE 3
#define BLT 4
#define BGE 5
#define BLTU 6
#define BGEU 7
#define SLT 8
#define SLTU 9
#define XOR 10
#define OR 11
#define AND 12
#define SLL 13
#define SRL 14
#define SRA 15
#define ADDPC 16 // add pc is a PC + rs2
#define USEIMM 32 //changes rs2 to imm

sCPU::sCPU(){
    pc_ = ROM_OFFSET;
    for(int i=0; i<16; i++) {
        regs_[i] = 0;
    }
}

void sCPU::LoadInstructions(){

    std::ifstream file("./codes/code.bin", std::ios::binary);
    if (!file) {
        std::cerr << "Cannot open file!" << std::endl;
    }
    
    size_t addr = 0;
    char byte;

    while (file.get(byte)) {
        if (addr >= MEM_SIZE) break;
        mem_[addr] = static_cast<uint8_t>(byte);
        addr++;
    }

    file.close();
}

uint64_t alu(uint32_t opcode, uint32_t reg_1, uint32_t reg_2, uint32_t pc, uint32_t imm){
    /*
        simple alu sim
        31 bits useless, 1 bit branch ctrl, 32 bits out
    */
    uint32_t out, ctrl;

    if (opcode & USEIMM) reg_2 = imm;
    if (opcode & ADDPC) reg_1 = pc;

    switch(opcode){
        case ADD:
            out = reg_1 + reg_2; break;
        case SUB:
            out = reg_1 - reg_2; break;
        case BEQ:
            if(reg_1 == reg_2) ctrl=1;
            else ctrl = 0; break;
        case BNE:
            if(reg_1 != reg_2) ctrl=1;
            else ctrl = 0; break;
        case BLT:
            if((int32_t)reg_1 < (int32_t)reg_2) ctrl=1;
            else ctrl = 0; break;
        case BGE:
            if((int32_t)reg_1 >= (int32_t)reg_2) ctrl=1;
            else ctrl = 0; break;
        case BLTU:
            if(reg_1 < reg_2) ctrl=1;
            else ctrl = 0; break;
        case BGEU:
            if(reg_1 >= reg_2) ctrl=1;
            else ctrl = 0; break;
        case SLT:
            if((int32_t)reg_1 < (int32_t)reg_2) out=1;
            else ctrl = 0; break;
        case SLTU:
            if(reg_1 < reg_2) out=1;
            else ctrl = 0; break;
        case XOR:
            out = reg_1 ^ reg_2; break;
        case OR:
            out = reg_1 | reg_2; break;
        case AND:
            out = reg_1 & reg_2; break;
        case SLL:
            out = reg_1 << reg_2; break;
        case SRL:
            out = reg_1 >> reg_2; break;
        case SRA:
            out = (int32_t)reg_1 >> reg_2; break;
    }
}

uint64_t decode(uint32_t opcode){
    /*
    used 32bits: 5:ALUop, 12:idk , 5:rs1, 5:rs2, 5:rd, 32:imm

    idk: 2:write to jump|pc|lsu|regs, 1 save from pc+4, 3save/load, 6errors
    */

    uint64_t operation, rd, func3, rs1, rs2, imm, sign;
    uint64_t imm_I,imm_S,imm_U,imm_B,imm_J, ret, conn, ret_imm, ret_alu, idk, loads;
    
    operation = opcode & ((1<<7)-1);
    rd = (opcode>>7) & ((1<<6)-1);
    func3 = (opcode>>12) & ((1<<4)-1);
    rs1 = (opcode>>15) & ((1<<6)-1);
    rs2 = (opcode>>20) & ((1<<6)-1);
    imm = (opcode>>25) & ((1<<7)-1);

    sign = imm&(1<<6);
    imm_I = ((sign<<32)-1 - ((sign<<11)-1)) + (imm<<5) + rs2;
    imm_S = ((sign<<32)-1 - ((sign<<11)-1)) + (imm<<5) + rd;
    imm_U = ((imm<<13) + (rs2<<8) + (rs1<<3) + func3)<<12;
    imm_B = ((sign<<32)-1 - ((sign<<12)-1)) + ((imm&(1<<6))<<6)+((rd&1)<<11)+((imm&((1<<6)-1))<<5)+ ((rd&((1<<5)-2))<<1);
    imm_J = ((sign<<32)-1 - ((sign<<20)-1)) + (rs1<<15) + (func3<<12) + ((rs2&1)<<11) + ((imm&((1<<7)-1))<<5) + (rs2&((1<<5)-2)<<1);

    switch(operation){
        case 0b0110111: //LUI
            ret_imm = imm_U;
            ret_alu = ADD;
            idk = 0<<10; break;
        case 0b0010111: //AUIPC
            ret_imm = imm_U;
            ret_alu = ADDPC + USEIMM;
            idk = 0<<10; break;
        case 0b1101111: //JAL
            ret_imm =  imm_J;
            ret_alu = ADDPC + USEIMM;
            idk = 3<<10; break;
        case 0b1100111: //JALR
            switch(func3){
                case 0:
                    ret_imm =  imm_I;
                    ret_alu = ADD + USEIMM;
                    idk = 3<<10; break;
                default:
                    idk += ILL_INST; break;
            } break;
        case 0b1100011: //branches
            ret_imm =  imm_B;
            ret_alu = ADD + USEIMM;
            idk = 2<<10;
            switch(func3){
                case 0b000: //BEQ
                    ret_alu += BEQ; break;
                case 0b001: //BNE
                    ret_alu += BNE; break;
                case 0b100: //BLT
                    ret_alu += BLT; break;
                case 0b101: //BGE
                    ret_alu += BGE; break;
                case 0b110: //BLTU
                    ret_alu += BLTU; break;
                case 0b111: //BGEU
                    ret_alu += BGEU; break; 
                default:
                    idk += ILL_INST;
            } break;
        case 0b0000011: //loads
            ret_imm =  imm_I;
            ret_alu = ADD + USEIMM;
            idk = 1<<10;
            switch(func3){
                case 0b000: //LB
                    idk += 0<<6; break;
                case 0b001: //LH
                    idk += 1<<6; break;
                case 0b010: //LW
                    idk += 2<<6; break;
                case 0b100: //LBU
                    idk += 3<<6; break;
                case 0b101: //LHU
                    idk += 4<<6; break;
                default:
                    idk += ILL_INST;
            } break;
        case 0b0100011: //saves
            ret_imm =  imm_S;
            ret_alu = ADD + USEIMM;
            idk = 1<<10;   
            switch(func3){
                case 0b000: //SB
                    idk += 5<<6; break;
                case 0b001: //SH
                    idk += 6<<6; break;
                case 0b010: //SW
                    idk += 7<<6; break;
                default:
                    idk += ILL_INST;
            } break;
        case 0b0010011: //math opers with imms
            ret_imm = imm_I;
            switch(func3){
                case 0b000: //ADDI
                    ret_alu = ADD + USEIMM; break;
                case 0b010: //SLTI
                    ret_alu = SLT + USEIMM; break;
                case 0b011: //SLTIU
                    ret_alu = SLTU + USEIMM; break;
                case 0b100: //XORI
                    ret_alu = XOR + USEIMM; break;
                case 0b110: //ORI
                    ret_alu = OR + USEIMM; break;
                case 0b111: //ANDI
                    ret_alu = AND + USEIMM; break;
                case 0b001: //SLLI
                    ret_alu = SLL + USEIMM; break;
                case 0b101: //SRI
                    if(!(imm & 0x20)) ret_alu = SRL + USEIMM; //SRLI
                    else ret_alu = SRA + USEIMM; //SRAI 
                    break;
                default:
                    idk += ILL_INST;
            } break;
        case 0b0110011: //math opers between regs
            switch(func3){
                case 0b000: //ADD
                    ret_alu = ADD; break;
                case 0b010: //SLT
                    ret_alu = SLT; break;
                case 0b011: //SLTU
                    ret_alu = SLTU; break;
                case 0b100: //XOR
                    ret_alu = XOR; break;
                case 0b110: //OR
                    ret_alu = OR; break;
                case 0b111: //AND
                    ret_alu = AND; break;
                case 0b001: //SLL
                    ret_alu = SLL; break;
                case 0b101: //SR
                    if(!(imm & 0x20)) ret_alu = SRL; //SRL
                    else ret_alu = SRA; //SRA 
                    break;
                default:
                    idk += ILL_INST;
            } break;
        default:
            idk += ILL_INST;
    }
    return ((ret_alu<<59) + (idk<<47) + (rs1<<42) + (rs2<<37) + (rd<<32) + (ret_imm));  
}

int sCPU::do_step(){
    uint32_t code, imm, aluop, rs1, rs2, idk, rd;
    uint64_t recv;

    code = (mem_[pc_+3]<<24)+(mem_[pc_+2]<<16)+(mem_[pc_+1]<<8)+mem_[pc_];

    if(code == 0b00000000000100000000000001110011){
        return 0;
    }

    recv = decode(code);
    aluop = (recv>>59)&0x1f;
    idk = (recv>>47)&0xfff;
    rs1 = (recv>>42)&0x1f;
    rs2 = (recv>>37)&0x1f;
    rd  = (recv>>32)&0x1f;
    imm = recv & 0xffffffff;
    
    recv = alu(aluop, regs_[rs1],regs_[rs2],pc_, imm);
    
    //idk: 2:write to jump|pc|lsu|regs_, 1 save from pc+4, 3save/load, 6errors
    
    if(idk&0xc00 == 0){
        regs_[rd] = recv&0xffffffff;
        pc_ = pc_+4;
    }else if(idk&0xc00 == 1){
        //there should be call to memory
    }else if(idk&0xc00 == 2){
        pc_ = recv&0xffffffff;
    }else{
        pc_ = recv&0xffffffff;
        regs_[rd] = pc_+4;
    }
}