#ifndef MEMORY_H
#define MEMORY_H

#include "chip8.h"

void init_memory(Chip8* chip8);

void load_program(Chip8* chip8, const char* filename);

u8 read_memory(Chip8* chip8, u16 addr);

void write_memory(Chip8* chip8, u16 addr, u8 value);

void clear_display(Chip8* chip8);
void update_keypad(Chip8* chip8, u8 key, u8 pressed);

#endif // MEMORY_H
