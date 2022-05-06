#pragma once
#include "olc6502.h"
#include   <cstdint>
#include <array>


using namespace std;

class Bus {       // The class
  public:
    Bus();
    ~Bus();
    
    //instancia da cpu olc6502
    olc6502 cpu; // CPU
    
    array<uint8_t, 64* 1024> ram; // RAM

   public:
  //função de escrita  pega e escreve um endereço de 16 bits e, um data de 8bits
void write(uint16_t adrr, uint8_t data);
//função de leitura le um endereço de 16 bits, cra uma flag de somente leitura
uint8_t read(uint16_t adrr, bool bReadOnly = false);
};