#include "bus.h"

Bus::Bus(){
    //limpar o conteudo da RAM;
    for(auto &i: ram) i = 0x00;
    cpu.ConnectBus(this);
}

Bus::~Bus(){
    
}

void Bus::write(uint16_t address, uint8_t data){
    //seta o conteudo da RAM do começo ao final da memoria alocada
    if (address >= 0x00 && address <= 0xFFFF){
        ram[address] = data;
    }
    
}

uint8_t Bus::read(uint16_t address, bool bReadOnly){
      if (address >= 0x00 && address <= 0xFFFF){
        return ram[address];
    }
    return 0x00;

}