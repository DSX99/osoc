#include "emupp.h"
#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdint>

#define ILL_opcode 2<<16
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

struct decoder_ctrl{
    uint32_t ret_alu;
    uint32_t idk;
    uint32_t rs1;
    uint32_t rs2;
    uint32_t rd;
    uint32_t imm;
};

sCPU::sCPU(){
    pc_ = ROM_OFFSET;
    for(int i=0; i<16; i++) {
        regs_[i] = 0;
    }
}

void sCPU::LoadInstructions(){

    std::ifstream file("../codes/codes.bin", std::ios::binary);
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

void sCPU::SetPC(uint32_t pc){
    pc_ = pc;
}

uint64_t alu(uint32_t opcode, uint32_t reg_1, uint32_t reg_2, uint32_t pc, uint32_t imm){
    /*
        simple alu sim
        31 bits useless, 1 bit branch ctrl, 32 bits out
    */
    uint32_t out = 0, ctrl = 0, reg_1_val = reg_1, reg_2_val = reg_2;

    if (opcode & USEIMM) reg_2 = imm;
    if (opcode & ADDPC) reg_1 = pc;

    switch(opcode&0xf){
        case ADD:
            out = reg_1 + reg_2; break;
        case SUB:
            out = reg_1 - reg_2; break;
        case BEQ:
            out = reg_1 + reg_2;
            if(reg_1_val == reg_2_val) ctrl=1;
            else ctrl = 0; break;
        case BNE:
            out = reg_1 + reg_2;
            if(reg_1_val != reg_2_val) ctrl=1;
            else ctrl = 0; break;
        case BLT:
            out = reg_1 + reg_2;
            if((int32_t)reg_1 < (int32_t)reg_2) ctrl=1;
            else ctrl = 0; break;
        case BGE:
            out = reg_1 + reg_2;
            if((int32_t)reg_1 >= (int32_t)reg_2) ctrl=1;
            else ctrl = 0; break;
        case BLTU:
            out = reg_1 + reg_2;
            if(reg_1 < reg_2) ctrl=1;
            else ctrl = 0; break;
        case BGEU:
            out = reg_1 + reg_2;
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
    return ((uint64_t)ctrl<<32)+out;
}

decoder_ctrl decode(uint32_t opcode){
    /*
    used 32bits: 6:ALUop, 11:idk , 5:rs1, 5:rs2, 5:rd, 32:imm

    idk: 2:write to jump|pc|lsu|regs, 1 save from pc+4, 3save/load, 5errors
    */

    uint64_t sign;
    uint32_t operation, rd, func3, rs1, rs2, imm;
    uint32_t conn, ret_imm, ret_alu, idk, loads;
    
    operation = opcode & ((1<<7)-1);
    rd = (opcode>>7) & ((1<<5)-1);
    func3 = (opcode>>12) & ((1<<3)-1);
    rs1 = (opcode>>15) & ((1<<5)-1);
    rs2 = (opcode>>20) & ((1<<5)-1);
    imm = (opcode>>25) & ((1<<7)-1);

    sign = imm&(1<<6);
    int32_t imm_I = ((int32_t)opcode) >> 20;
    int32_t imm_S = (((int32_t)opcode >> 25) << 5) | ((opcode >> 7) & 0x1F);
    imm_S = (imm_S<<20)>>20;
    int32_t imm_U = opcode & 0xFFFFF000;
    int32_t imm_B = (((opcode >> 31) & 0x1) << 12) | (((opcode >> 7)  & 0x1) << 11) | (((opcode >> 25) & 0x3F) << 5) |  (((opcode >> 8)  & 0xF) << 1);
    imm_B = (imm_B << 19) >> 19;
    int32_t imm_J = (((opcode >> 31) & 0x1) << 20) | (((opcode >> 12) & 0xFF) << 12) | (((opcode >> 20) & 0x1) << 11) | (((opcode >> 21) & 0x3F) << 1);
    imm_J = (imm_J << 11) >> 11;
    
    switch(operation){
        case 0b0110111: //LUI
            ret_imm = imm_U;
            ret_alu = ADD;
            idk = 0<<9; break;
        case 0b0010111: //AUIPC
            ret_imm = imm_U;
            ret_alu = ADDPC + USEIMM;
            idk = 0<<9; break;
        case 0b1101111: //JAL
            ret_imm =  imm_J;
            ret_alu = ADDPC + USEIMM;
            idk = 3<<9; break;
        case 0b1100111: //JALR
            switch(func3){
                case 0:
                    ret_imm =  imm_I;
                    ret_alu = ADD + USEIMM;
                    idk = 3<<9; break;
                default:
                    idk += ILL_opcode; break;
            } break;
        case 0b1100011: //branches
            ret_imm =  imm_B;
            ret_alu = ADDPC + USEIMM;
            idk = 2<<9;
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
                    idk += ILL_opcode;
            } break;
        case 0b0000011: //loads
            ret_imm =  imm_I;
            ret_alu = ADD + USEIMM;
            idk = 1<<9;
            switch(func3){
                case 0b000: //LB
                    idk += 0<<5; break;
                case 0b001: //LH
                    idk += 1<<5; break;
                case 0b010: //LW
                    idk += 2<<5; break;
                case 0b100: //LBU
                    idk += 3<<5; break;
                case 0b101: //LHU
                    idk += 4<<5; break;
                default:
                    idk += ILL_opcode;
            } break;
        case 0b0100011: //saves
            ret_imm =  imm_S;
            ret_alu = ADD + USEIMM;
            idk = 1<<9;   
            switch(func3){
                case 0b000: //SB
                    idk += 5<<5; break;
                case 0b001: //SH
                    idk += 6<<5; break;
                case 0b010: //SW
                    idk += 7<<5; break;
                default:
                    idk += ILL_opcode;
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
                    idk += ILL_opcode;
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
                    idk += ILL_opcode;
            } break;
        default:
            idk += ILL_opcode;
    }
    decoder_ctrl ret;
    ret.idk = idk & 0x7ff;
    ret.ret_alu = ret_alu & 0x3f;
    ret.rs1 = rs1 & 0x1f;
    ret.rs2 = rs2 & 0x1f;
    ret.rd = rd & 0x1f;
    ret.imm = ret_imm & 0xffffffff;
    return ret;
}

uint8_t sCPU::do_step(){
    uint32_t code, imm, aluop, rs1, rs2, idk, rd, value;
    uint64_t recv_alu;

    pc_ = pc_willwrite;

    printf("%d, %d, %d, %d\n",mem_[pc_+3],mem_[pc_+2],mem_[pc_+1],mem_[pc_]);
    code = (mem_[pc_]<<24)+(mem_[pc_+1]<<16)+(mem_[pc_+2]<<8)+mem_[pc_+3];
    printf("%b\n",code);
    if(code == 0b00000000000100000000000001110011){
        return 1;
    }

    decoder_ctrl recv = decode(code);
    aluop = recv.ret_alu & 0x3f;
    idk = recv.idk & 0x7ff;
    rs1 = recv.rs1 & 0x1f;
    rs2 = recv.rs2 & 0x1f;
    rd  = recv.rd & 0x1f;
    imm = recv.imm & 0xffffffff;
    
    recv_alu = alu(aluop, regs_[rs1],regs_[rs2],pc_, imm);
    value = recv_alu & 0xffffffff;
    //idk: 2:write to jump|pc|lsu|regs_, 1 save from pc+4, 3save/load, 5errors
    
    if(((idk&0xc00)>>10) == 0){
        regs_[rd] = value;
        pc_willwrite = pc_+4;
    }else if(((idk&0xc00)>>9) == 1){
        //there should be call to memory
    }else if(((idk&0xc00)>>9) == 2){
        if(recv_alu&(1ULL << 32)) pc_willwrite = value;
        else pc_willwrite+=4;
    }else if(((idk&0xc00)>>9) == 3){
        pc_willwrite = value;
        regs_[rd] = pc_+4;
    }else{
        return 1;
    }
    return 0;
}