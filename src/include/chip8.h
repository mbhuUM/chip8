#include <iostream>
#include <stdint.h>
#include <cstring>
#ifndef CHIP8_H
#define CHIP8_H
#pragma once

class chip8 {
    public:
        uint16_t opcode;

        //REGISTERS
        unsigned char V[16];

        unsigned short I; //Store memory addresses <- only rightmost 12 bits should be used
        unsigned char delay_timer;
        unsigned char sound_timer;

        //PSEUDO REGISTERS
        uint16_t PC;
        uint8_t SP; 

        //STACK
        uint16_t stack[16];

        //MEMORY
        /*
        The Chip-8 language is capable of accessing up to 4KB (4,096 bytes) of RAM, from location 0x000 (0) to 0xFFF (4095). 
        The first 512 bytes, from 0x000 to 0x1FF, are where the original interpreter was located, and should not be used by programs.
        Most Chip-8 programs start at location 0x200 (512), but some begin at 0x600 (1536). 
        Programs beginning at 0x600 are intended for the ETI 660 computer.
        */
        unsigned char mem[4096];

        unsigned char display[64 * 32];
        
        chip8();

        void initialize();

        void emulateCycle();

        // 00E0
// Clear the screen
void clear_screen_00E0(){

}


//Mapper that maps all the functions 
void opcodeMapper(short opcode);
   
};

#endif