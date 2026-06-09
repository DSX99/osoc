#include "emupp.h"
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
    uint32_t jump;
    uint32_t load_ctrl;
    uint32_t error;
    uint32_t rs1;
    uint32_t rs2;
    uint32_t rd;
    uint32_t imm;
};

sCPU::sCPU(){
    pc_ = ROM_OFFSET;
    for(int i=0; i<32; i++) {
        regs_[i] = 0;
    }
}

uint8_t sCPU::LoadInstructions(){

    std::ifstream file("/home/dsx99/osoc/codes/codes.bin", std::ios::binary);
    if (!file) {
        std::cerr << "Cannot open file!" << std::endl;
        return 1;
    }
    
    size_t addr = 0;
    char byte;

    while (file.get(byte)) {
        if (addr >= MEM_SIZE) break;
        mem_[addr] = static_cast<uint8_t>(byte);
        addr++;
    }

    file.close();
    return 0;
}

void sCPU::SetPC(uint32_t pc){
    pc_willwrite = pc;
}

decoder_ctrl decode(uint32_t opcode){
    /*
    used 32bits: 6:ALUop, 11:idk , 5:rs1, 5:rs2, 5:rd, 32:imm

    idk: 2:write to jump|pc|lsu|regs, 1 save from pc+4, 3save/load, 5errors
    */

    uint64_t sign;
    uint32_t operation, rd, func3, rs1, rs2, imm;
    uint32_t ret_imm=0, ret_alu=0, jump=0, load_ctrl=0, error=0;
    
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
    int32_t imm_J = (((opcode >> 31) & 0x1) << 20) | (((opcode >> 12) & 0xFF) << 12) | (((opcode >> 20) & 0x1) << 11) | (((opcode >> 21) & 0x3FF) << 1);
    imm_J = (imm_J << 11) >> 11;
    
    switch(operation){
        case 0b0110111: //LUI
            rs1=0;
            ret_imm = imm_U;
            ret_alu = ADD + USEIMM;
            jump = 0; break;
        case 0b0010111: //AUIPC
            ret_imm = imm_U;
            ret_alu = ADDPC + USEIMM;
            jump = 0; break;
        case 0b1101111: //JAL
            ret_imm =  imm_J;
            ret_alu = ADDPC + USEIMM;
            jump = 3; break;
        case 0b1100111: //JALR
            switch(func3){
                case 0:
                    ret_imm =  imm_I;
                    ret_alu = ADD + USEIMM;
                    jump = 3; break;
                default:
                    error += ILL_opcode; break;
            } break;
        case 0b1100011: //branches
            ret_imm =  imm_B;
            ret_alu = ADDPC + USEIMM;
            jump = 2;
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
                    error += ILL_opcode;
            } break;
        case 0b0000011: //loads
            ret_imm =  imm_I;
            ret_alu = ADD + USEIMM;
            jump = 1;
            switch(func3){
                case 0b000: //LB
                    load_ctrl = 0; break;
                case 0b001: //LH
                    load_ctrl = 1; break;
                case 0b010: //LW
                    load_ctrl = 2; break;
                case 0b100: //LBU
                    load_ctrl = 3; break;
                case 0b101: //LHU
                    load_ctrl = 4; break;
                default:
                    error += ILL_opcode;
            } break;
        case 0b0100011: //saves
            ret_imm =  imm_S;
            ret_alu = ADD + USEIMM;
            jump = 1;   
            switch(func3){
                case 0b000: //SB
                    load_ctrl = 5; break;
                case 0b001: //SH
                    load_ctrl = 6; break;
                case 0b010: //SW
                    load_ctrl = 7; break;
                default:
                    error += ILL_opcode;
            } break;
        case 0b0010011: //math opers with imms
            ret_imm = imm_I;
            jump = 0;
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
                    error += ILL_opcode;
            } break;
        case 0b0110011: //math opers between regs
            jump = 0;
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
                    error += ILL_opcode;
            } break;
        default:
            error += ILL_opcode;
    }
    decoder_ctrl ret;
    ret.jump = jump & 0x3;
    ret.load_ctrl = load_ctrl&0x7;
    ret.error = error;
    ret.ret_alu = ret_alu & 0x3f;
    ret.rs1 = rs1 & 0x1f;
    ret.rs2 = rs2 & 0x1f;
    ret.rd = rd & 0x1f;
    ret.imm = ret_imm & 0xffffffff;
    return ret;
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
            else out = 0; break;
        case SLTU:
            if(reg_1 < reg_2) out=1;
            else out = 0; break;
        case XOR:
            out = reg_1 ^ reg_2; break;
        case OR:
            out = reg_1 | reg_2; break;
        case AND:
            out = reg_1 & reg_2; break;
        case SLL:
            out = reg_1 << (reg_2& 0x1F); break;
        case SRL:
            out = reg_1 >> (reg_2& 0x1F); break;
        case SRA:
            out = (int32_t)reg_1 >> (reg_2& 0x1F); break;
    }
    return ((uint64_t)ctrl<<32)+out;
}

void sCPU::mem_intf(uint8_t lsu_act, uint32_t addr, uint32_t rd){

    // printf("Trying to access mem at addr:%d for %d, from/to register:%d\n", addr, lsu_act,rd);

    if(addr > ROM_OFFSET){
        switch(lsu_act){
            case 0:
                printf("%d\n",mem_[addr - ROM_OFFSET]);
                regs_[rd] = mem_[addr - ROM_OFFSET] + (((mem_[addr - ROM_OFFSET]&0x80)>>7) * (0xffffff00)); break;
            case 1:
                regs_[rd] = mem_[addr - ROM_OFFSET] + (mem_[addr - ROM_OFFSET + 1]<<8) + (((mem_[addr - ROM_OFFSET + 1]&0x80)>>7) * (0xffff0000)); break; 
            case 2:
                regs_[rd] = mem_[addr - ROM_OFFSET] + (mem_[addr - ROM_OFFSET + 1]<<8) + (mem_[addr - ROM_OFFSET + 2]<<16) + (mem_[addr - ROM_OFFSET + 3]<<24); break;
            case 3:
                regs_[rd] = mem_[addr - ROM_OFFSET]; break;
            case 4:
                regs_[rd] = mem_[addr - ROM_OFFSET] + (mem_[addr - ROM_OFFSET + 1]<<8); break;
            case 5:
                mem_[addr - ROM_OFFSET] = regs_[rd]&0xff; break;
            case 6:
                mem_[addr - ROM_OFFSET] = regs_[rd]&0xff;
                mem_[addr - ROM_OFFSET + 1] = (regs_[rd]&0xff00)>>8; break;
            case 7:
                // printf("should write %d \n",regs_[rd]);
                mem_[addr - ROM_OFFSET] = regs_[rd]&0xff;
                mem_[addr - ROM_OFFSET + 1] = (regs_[rd]&0xff00)>>8;
                mem_[addr - ROM_OFFSET + 2] = (regs_[rd]&0xff0000)>>16;
                mem_[addr - ROM_OFFSET + 3] = (regs_[rd]&0xff000000)>>24; 
                // printf("got %d, %d, %d, %d \n", mem_[addr - ROM_OFFSET], (mem_[addr - ROM_OFFSET + 1]), (mem_[addr - ROM_OFFSET + 2]), (mem_[addr - ROM_OFFSET + 3])); break;
        }
    }
}

std::string decode_to_str(uint32_t opcode) {
    /*
    used 32bits: 6:ALUop, 11:idk , 5:rs1, 5:rs2, 5:rd, 32:imm
    idk: 2:write to jump|pc|lsu|regs, 1 unused, 3save/load, 5errors
    */

    uint64_t sign;
    uint32_t operation, rd, func3, rs1, rs2, imm;
    int32_t ret_imm = 0;
    uint8_t use_r1 = 0, use_r2 = 0, use_rd = 0, use_imm = 0; 
    std::string str;

    operation = opcode & ((1 << 7) - 1);
    rd = (opcode >> 7) & ((1 << 5) - 1);
    func3 = (opcode >> 12) & ((1 << 3) - 1);
    rs1 = (opcode >> 15) & ((1 << 5) - 1);
    rs2 = (opcode >> 20) & ((1 << 5) - 1);
    imm = (opcode >> 25) & ((1 << 7) - 1);

    sign = imm & (1 << 6);
    int32_t imm_I = ((int32_t)opcode) >> 20;
    int32_t imm_S = (((int32_t)opcode >> 25) << 5) | ((opcode >> 7) & 0x1F);
    imm_S = (imm_S << 20) >> 20;
    int32_t imm_U = opcode & 0xFFFFF000;
    int32_t imm_B = (((opcode >> 31) & 0x1) << 12) | (((opcode >> 7)  & 0x1) << 11) | (((opcode >> 25) & 0x3F) << 5) |  (((opcode >> 8)  & 0xF) << 1);
    imm_B = (imm_B << 19) >> 19;
    int32_t imm_J = (((opcode >> 31) & 0x1) << 20) | (((opcode >> 12) & 0xFF) << 12) | (((opcode >> 20) & 0x1) << 11) | (((opcode >> 21) & 0x3FF) << 1);
    imm_J = (imm_J << 11) >> 11;
    
    if(opcode == 0b00000000000100000000000001110011) return "EBREAK";

    switch(operation) {
        case 0b0110111: // LUI
            ret_imm = imm_U; use_imm = 1; use_rd = 1; str = "LUI"; break;
        case 0b0010111: // AUIPC
            ret_imm = imm_U; use_imm = 1; use_rd = 1; str = "AUIPC"; break;
        case 0b1101111: // JAL
            ret_imm = imm_J; use_imm = 1; use_rd = 1; str = "JAL"; break;
        case 0b1100111: // JALR
            if(func3 == 0) {
                ret_imm = imm_I; use_imm = 1; use_rd = 1; use_r1 = 1; str = "JALR";
            } else {
                str = "ILL_INST";
            } break;
        case 0b1100011: // branches
            ret_imm = imm_B; use_imm = 1; use_r1 = 1; use_r2 = 1;
            switch(func3) {
                case 0b000: str = "BEQ"; break;
                case 0b001: str = "BNE"; break;
                case 0b100: str = "BLT"; break;
                case 0b101: str = "BGE"; break;
                case 0b110: str = "BLTU"; break;
                case 0b111: str = "BGEU"; break; 
                default:   str = "ILL_INST";
            } break;
        case 0b0000011: // loads
            ret_imm = imm_I; use_imm = 1; use_rd = 1; use_r1 = 1;
            switch(func3) {
                case 0b000: str = "LB"; break;
                case 0b001: str = "LH"; break;
                case 0b010: str = "LW"; break;
                case 0b100: str = "LBU"; break;
                case 0b101: str = "LHU"; break;
                default:   str = "ILL_INST";
            } break;
        case 0b0100011: // stores
            ret_imm = imm_S; use_imm = 1; use_r1 = 1; use_r2 = 1;
            switch(func3) {
                case 0b000: str = "SB"; break;
                case 0b001: str = "SH"; break;
                case 0b010: str = "SW"; break;
                default:   str = "ILL_INST";
            } break;
        case 0b0010011: // math opers with imms
            ret_imm = imm_I; use_imm = 1; use_rd = 1; use_r1 = 1;
            switch(func3) {
                case 0b000: str = "ADDI"; break;
                case 0b010: str = "SLTI"; break;
                case 0b011: str = "SLTIU"; break;
                case 0b100: str = "XORI"; break;
                case 0b110: str = "ORI"; break;
                case 0b111: str = "ANDI"; break;
                case 0b001: str = "SLLI"; break;
                case 0b101: 
                    if(!(imm & 0x20)) str = "SRLI"; 
                    else str = "SRAI";  
                    break;
                default:   str = "ILL_INST";
            } break;
        case 0b0110011: // math opers between regs
            use_rd = 1; use_r1 = 1; use_r2 = 1;
            switch(func3) {
                case 0b000: 
                    if(!(imm & 0x20)) str = "ADD"; 
                    else str = "SUB";
                    break;
                case 0b010: str = "SLT"; break;
                case 0b011: str = "SLTU"; break;
                case 0b100: str = "XOR"; break;
                case 0b110: str = "OR"; break;
                case 0b111: str = "AND"; break;
                case 0b001: str = "SLL"; break;
                case 0b101: 
                    if(!(imm & 0x20)) str = "SRL"; 
                    else str = "SRA";  
                    break;
                default:   str = "ILL_INST";
            } break;
        default:
            str = "ILL_INST";
    }

    if (str == "ILL_INST") {
        return "ILL_INST";
    }

    std::string out_assembly = str + " ";
    char buf[64];

    // Format output strings correctly matching assembly syntax schemas
    if (operation == 0b0100011) { // Stores: sb rs2, imm(rs1)
        std::snprintf(buf, sizeof(buf), "x%d, %d(x%d)", rs2, ret_imm, rs1);
        out_assembly += buf;
    } 
    else if (operation == 0b0000011 || operation == 0b1100111) { // Loads & JALR: lw rd, imm(rs1)
        std::snprintf(buf, sizeof(buf), "x%d, %d(x%d)", rd, ret_imm, rs1);
        out_assembly += buf;
    }
    else { // Generic R/I/U/J Types
        if (use_rd) {
            std::snprintf(buf, sizeof(buf), "x%d", rd);
            out_assembly += buf;
        }
        if (use_r1) {
            if (use_rd) out_assembly += ", ";
            std::snprintf(buf, sizeof(buf), "x%d", rs1);
            out_assembly += buf;
        }
        if (use_r2) {
            if (use_rd || use_r1) out_assembly += ", ";
            std::snprintf(buf, sizeof(buf), "x%d", rs2);
            out_assembly += buf;
        }
        if (use_imm) {
            if (use_rd || use_r1 || use_r2) out_assembly += ", ";
            std::snprintf(buf, sizeof(buf), "%d", ret_imm);
            out_assembly += buf;
        }
    }

    return out_assembly;
}

uint8_t sCPU::do_step(){
    uint32_t code, imm, aluop, rs1, rs2, idk, rd, value, lsu_act, jump, error;
    uint64_t recv_alu;
    
    pc_ = pc_willwrite;

    if(pc_+3>=(MEM_SIZE*8)+ROM_OFFSET || ROM_OFFSET > pc_){
        printf("outofbound memory call \n");
        return 0;
    }
    code = (mem_[pc_+3-ROM_OFFSET]<<24)+(mem_[pc_+2-ROM_OFFSET]<<16)+(mem_[pc_+1-ROM_OFFSET]<<8)+mem_[pc_-ROM_OFFSET];
    // printf("%s\n",decode_to_str(code).c_str());
    if(code == 0b00000000000100000000000001110011){
        if(regs_[10]==0){
            printf("ebreak, but good one\n");
            regs_[0] = 0;
            return 2;
        }else{
            printf("!!ebreak, but bad one!!\n");
            regs_[0] = 0;
            return 0;
        }
    }

    decoder_ctrl recv = decode(code);
    aluop = recv.ret_alu & 0x3f;
    jump = recv.jump& 0x3;
    error = recv.error & 0x1f;
    lsu_act = recv.load_ctrl & 0x7;
    rs1 = recv.rs1 & 0x1f;
    rs2 = recv.rs2 & 0x1f;
    rd  = recv.rd & 0x1f;
    imm = recv.imm & 0xffffffff;

    if (recv.error != 0) {
        return 0;
    }
    
    recv_alu = alu(aluop, regs_[rs1],regs_[rs2],pc_, imm);
    value = recv_alu & 0xffffffff;
    //idk: 2:write to jump|pc|lsu|regs_, 1 unused, 3save/load, 5errors
    
    if(jump == 0){
        regs_[rd] = value;
        pc_willwrite = pc_+4;
    }else if(jump == 1){
        if (lsu_act == 5 || lsu_act == 6 || lsu_act == 7) rd = rs2;
        mem_intf(lsu_act, value, rd);
        pc_willwrite = pc_ + 4;
    }else if(jump == 2){
        if(recv_alu&((uint64_t)1 << 32)) pc_willwrite = value;
        else pc_willwrite = pc_ + 4;
    }else if( jump == 3){
        pc_willwrite = value;
        regs_[rd] = pc_+4;
    }else{
        regs_[0] = 0;
        return 0;
    }
    regs_[0] = 0;
    return 1;
}