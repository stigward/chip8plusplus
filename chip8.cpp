#include <cstring>
#include <ios>
#include <iostream>
#include <fstream>
#include "chip8.h"

Chip8::Chip8() {
  pc = START_ADDRESS; 
  memset(memory, 0, sizeof(memory));
  //TODO: initialize other vals
}

bool Chip8::load_rom(char const* filename) {
  std::ifstream file(filename, std::ios::binary | std::ios::ate);
  if(~file.is_open()) {
    return false;
  } else {
    std:std::streampos size = file.tellg();
    char *buff = new char[size];

    file.seekg(0, std::ios::beg);
    file.read(buff, size);

    for (long i = 0; i < size; ++i) {
      index = START_ADDRESS + i;
      memory[index] = buff[i];
    }
    delete[] buff;
    return true;
  }
  
  

}
