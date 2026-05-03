#include <stdint.h>
#include <stdio.h>
#include "simulator/sim.h"

int main() {

 struct State system;

 for(int i = 0;i<255;i++)
 {
    system.regs.reg[i] = 0;
 }

 struct Instruction i;
 i.opcode = 2;
 i.operand1 = 10;
 i.operand2 = 20;

 system.regs.reg[10] = 100;
 system.regs.reg[20] = 200;

 execute_Instruction(i, &system);

 printf("Result: %d\n", system.regs.reg[i.operand1]);

}
