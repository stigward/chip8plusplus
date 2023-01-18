#include <cstdint>

#define START_ADDRESS 0x200;

class Chip8 {
  public:
    uint8_t registers[16];
    uint8_t memory[4096];
    uint16_t index;
    uint16_t pc;
    uint16_t stack[16];
    uint8_t sp;
    uint8_t delayTimer;
    uint8_t soundTimer;
    uint8_t keypad[16];
    uint32_t video[64 * 32];
    uint16_t opcode;


// ---- CONSTRUCTORS -----
    Chip8();
    ~Chip8();


// ---- CLASS METHODS -----
    bool load_rom(const char* filename); 

// ---- CPU INSTRUCTIONS -----

    void op_00E0();
    void op_00EE(); 
    void op_0nnn();
    void op_1nnn();
    void op_2nnn();
    void op_3xkk();
    void op_4xkk();
    void op_5xy0();
    void op_6xkk();
    void op_7xkk();
    void op_8xy0();
    void op_8xy1();
    void op_8xy2();
    void op_8xy3();
    void op_8xy4();
    void op_8xy5();
    void op_8xy6();
    void op_8xy7();
    void op_8xyE();
    void op_9xy0();
    void op_Annn();
    void op_Bnnn();
    void op_Cxkk();
    void op_Dxyn();
    void op_Ex9E();
    void op_ExA1();
    void op_Fx07();
    void op_Fx0A();
    void op_Fx15();
    void op_Fx18();
    void op_Fx1E();
    void op_Fx29();
    void op_Fx33();
    void op_Fx55();
    void op_Fx65();
    void op_00Cn();
    void op_00FB();
    void op_00FC();
    void op_00FD();
    void op_00FE();
    void op_00FF();
    void op_Dxy0();
    void op_Fx30();
    void op_Fx75();
    void op_Fx85();
};
