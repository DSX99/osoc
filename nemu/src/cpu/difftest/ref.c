/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

#define WRITE 1 //write to here
#define READ 0  //read from here

void pmem_cpy(paddr_t addr ,void *buf, int len);
uint8_t *pmem_p();
bool isa_reg_cmp(word_t *regs);
uint32_t *isa_reg_p();
uint32_t isa_pc();

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if(direction){
    pmem_cpy(addr, buf, n);
  }else{
    memcpy(buf, pmem_p()+addr-CONFIG_MBASE, n);
  }
}

__EXPORT void difftest_regcpy(uint32_t *regs, bool direction) {
  if(direction){
    isa_reg_cmp(regs);
  }else{
    memcpy(regs, isa_reg_p(), 32 * sizeof(uint32_t));
  }
}

__EXPORT void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

__EXPORT uint32_t difftest_pc() {
  return isa_pc();
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
