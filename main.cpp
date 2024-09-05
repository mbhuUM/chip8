#include <iostream>
#include <stdint.h>

unsigned short opcode;

//REGISTERS
uint8_t V0;
uint8_t V1;
uint8_t V2;
uint8_t V3;
uint8_t V4;
uint8_t V5;
uint8_t V6;
uint8_t V7;
uint8_t V8;
uint8_t V9;
uint8_t VA;
uint8_t VB;
uint8_t VC;
uint8_t VD;
uint8_t VE;
uint8_t VF; //THIS SHOULD BE UNUSED

unsigned short I; //Store memory addresses <- only rightmost 12 bits should be used
bool soundFlag;
bool delayFlag;

//PSEUDO REGISTERS
uint16_t PC;
uint8_t SP; 

//STACK
uint16_t STACK[16];

int main(){

    return 0;
}