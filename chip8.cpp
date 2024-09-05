#include "chip8.h"
#include "opcodes.cpp"



chip8::chip8() {
    this->initialize();
}

void chip8::initialize() {
    this->PC = 0x200;
    this->opcode = 0;
    this->I = 0;
    this->SP = 0;
    // Clear display	
    std::memset(this->display, 0, sizeof(this->display));
    // Clear stack
    std::memset(this->stack, 0, sizeof(this->stack));
    // Clear registers V0-VF
    std::memset(this->V, 0, sizeof(this->V));
    // Clear memory
    std::memset(this->mem, 0, sizeof(mem));
}


void chip8::emulateCycle() {

}