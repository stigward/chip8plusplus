#include <iostream>
#include "chip8.h"

int main(int argc, char** argv) {
    if (argc != 2) {
      std::cerr << "Usage: " << argv[0] << " <ROM>\n";
      std::exit(EXIT_FAILURE);
    } 

    char const* filename = argv[1];
    std::cerr << "[+] Loading " << filename << "...";

    return 0;
}

