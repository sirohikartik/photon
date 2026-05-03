#include "sim.h"
#include<stdint.h>


void execute_Instruction(struct Instruction instr, struct State* s) {
  int reg1, reg2;
  switch (instr.opcode) {
    case 0:  // add operand 1 and 2 and store in opearand 1
    reg1 = s->regs.reg[instr.operand1];
    reg2 = s->regs.reg[instr.operand2];
    s->regs.reg[instr.operand1] = reg1 + reg2;
    break;

    case 1:  // subtract operand 2 from operand 1 and store in operand 1
    reg1 = s->regs.reg[instr.operand1];
    reg2 = s->regs.reg[instr.operand2];
    s->regs.reg[instr.operand1] = reg1 - reg2;
    break;

    case 2:  // multiply operand 1 and 2 and store in operand 1
    reg1 = s->regs.reg[instr.operand1];
    reg2 = s->regs.reg[instr.operand2];
    s->regs.reg[instr.operand1] = reg1 * reg2;
    break;

    case 3:  // divide operand 1 by operand 2 and store in operand 1
    reg1 = s->regs.reg[instr.operand1];
    reg2 = s->regs.reg[instr.operand2];
    s->regs.reg[instr.operand1] = reg1 / reg2;
    break;

    default:
    break;
  }
}
