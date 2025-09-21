#ifndef CHIP8_H
#define CHIP8_H

#define MEMORY_SIZE 4096
#define REGISTER_COUNT 16
#define STACK_SIZE 16
#define DISPLAY_WIDTH 64
#define DISPLAY_HEIGHT 32
#define DISPLAY_SIZE (DISPLAY_WIDTH * DISPLAY_HEIGHT / 8)
#define KEYPAD_SIZE 16

#define u8 unsigned char
#define u16 unsigned short

typedef struct Chip8
{
    u8 memory[MEMORY_SIZE];
    u8 V[REGISTER_COUNT];
    u16 I;
    u16 pc;
    u16 stack[STACK_SIZE];
    u8 sp;

    u8 dt;  // delay timer
    u8 st;  // sound timer

    u8 keypad[KEYPAD_SIZE];
    u8 display[DISPLAY_SIZE];
} Chip8;

#endif