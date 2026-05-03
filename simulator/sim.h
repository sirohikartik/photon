#ifndef SIM_H
#define SIM_H
#include<stdint.h>


struct Regs{
  int reg[255];
};

struct State {
  int pc;
  struct Regs regs;
};

struct Instruction {
    int opcode;
    int operand1;
    int operand2;
};

void execute_Instruction(struct Instruction instr, struct State* s);

#endif // SIM_H
