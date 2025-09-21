#ifndef OPCODE_H
#define OPCODE_H

#define OP_CLS 0x00E0       // CLS
#define OP_RET 0x00EE       // RET
#define OP_SYS 0x0000       // SYS addr
#define OP_JP 0x1000        // JP addr
#define OP_CALL 0x2000      // CALL addr
#define OP_SE 0x3000        // SE Vx, byte
#define OP_SNE 0x4000       // SNE Vx, byte
#define OP_SEV 0x5000       // SE Vx, Vy
#define OP_LD 0x6000        // LD Vx, byte
#define OP_ADD 0x7000       // ADD Vx, byte
#define OP_LDV 0x8000       // LD Vx, Vy
#define OP_OR 0x8001        // OR Vx, Vy
#define OP_AND 0x8002       // AND Vx, Vy
#define OP_XOR 0x8003       // XOR Vx, Vy
#define OP_ADDV 0x8004      // ADDV Vx, Vy
#define OP_SUBV 0x8005      // SUBV Vx, Vy
#define OP_SHRV 0x8006      // SHRV Vx {, Vy}
#define OP_SUBNV 0x8007     // SUBNV Vx, Vy
#define OP_SHLV 0x800E      // SHLV Vx {, Vy}
#define OP_SNEV 0x9000      // SNE Vx, Vy
#define OP_LDI 0xA000       // LD I, addr
#define OP_JPV 0xB000       // JP Vx
#define OP_RND 0xC000       // RND Vx, byte
#define OP_DRW 0xD000       // DRW Vx, Vy, nibble
#define OP_SKP 0xE09E       // SKP Vx
#define OP_SKNP 0xE0A1      // SKNP Vx
#define OP_LDDT 0xF007      // LD Vx, DT
#define OP_LDK 0xF00A       // LD Vx, K
#define OP_LDD 0xF015       // LD DT, Vx
#define OP_LDS 0xF018       // LD ST, Vx
#define OP_ADDI 0xF01E      // ADD I, Vx
#define OP_LDF 0xF029       // LD F, Vx
#define OP_LDB 0xF033       // LD B, Vx
#define OP_LDI2 0xF055      // LD [I], Vx
#define OP_LDI3 0xF065      // LD Vx, [I]

#endif // OPCODE_H