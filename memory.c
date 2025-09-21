#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "memory.h"
#include "chip8.h"

void init_memory(Chip8* chip8) {
    memset(chip8->memory, 0, MEMORY_SIZE);
}

void load_program(Chip8* chip8, const char* filename) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        exit(1);
    }

    // Load program into memory starting at address 0x200
    size_t program_size = fread(chip8->memory + 0x200, sizeof(u8), MEMORY_SIZE - 0x200, file);
    if (program_size == 0) {
        printf("Error loading program\n");
        fclose(file);
        exit(1);
    }

    fclose(file);
}

u8 read_memory(Chip8* chip8, u16 addr) {
    if (addr >= MEMORY_SIZE) {
        printf("Invalid memory access attempt: 0x%04X\n", addr);
        exit(1);
    }
    return chip8->memory[addr];
}

void write_memory(Chip8* chip8, u16 addr, u8 value) {
    if (addr >= MEMORY_SIZE) {
        printf("Invalid memory access attempt: 0x%04X\n", addr);
        exit(1);
    }
    chip8->memory[addr] = value;
}

void clear_display(Chip8* chip8) {
    memset(chip8->display, 0, DISPLAY_SIZE);
}

void update_keypad(Chip8* chip8, u8 key, u8 pressed) {
    if (key >= KEYPAD_SIZE) {
        printf("Invalid key: %d\n", key);
        return;
    }
    chip8->keypad[key] = pressed;
}
