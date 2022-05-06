#pragma once
#include <map>
#include <string>
#include <vector>
#include <stdio.h>
#include <cstdint>
#include "bus.h"

//#include <iostream>



using namespace std;

class Bus;

class olc6502
 {       // The class
  public:             // Access specifier
   olc6502();
   ~olc6502();
   //enumeração do registro de estado em bits do core do processador
   enum FLAGS6502{ 
     C= (1<<0), // Carga de  bits
     Z = (1<<1), // Zero
     I = (1<<2), //desabilita Interrupções
     D = (1<<3), //modo decimal (sem uso pra essa implementação)
     B = (1<<4), //Break
     U = (1<<5), //Sem uso
     V = (1<<6), //Overflow
     N = (1<<7), // Negativo

   };

    uint8_t a = 0x00; //Registro de acumulador
    uint8_t x = 0x00; //Registro da posicao x
    uint8_t y = 0x00; //Reghistro da posicao Y
    uint8_t stkp = 0x00; // Stack pointer (aponta o local da posição do objeto (self.olv6502) no Bus)
    uint16_t program_counter = 0x00; //Contador do programa
    uint8_t status = 0x00; //Registro de status

   void ConnectBus(Bus *n)
   {
     bus = n;
   }
    //disassemble pra transformar os numeros em um numero humano
   map<uint16_t, std::string> disassemble(uint16_t nStart, uint16_t nStop);

   // funções de Modo de endereçamento de acodo com a documentação do core do processador do modelo 6502
   uint8_t IMP();
   uint8_t ZP0();
   uint8_t ZPY();
   uint8_t ABS();
   uint8_t ABY();
   uint8_t IZX();
   uint8_t IMM();
   uint8_t ZPX();
   uint8_t REL();
   uint8_t ABX();
   uint8_t IND();
   uint8_t IZY();

    
  private:



    Bus *bus = nullptr; 

    //upcode:
    uint8_t ADC();	uint8_t AND();	uint8_t ASL();	uint8_t BCC();
    uint8_t BCS();	uint8_t BEQ();	uint8_t BIT();	uint8_t BMI();
    uint8_t BNE();	uint8_t BPL();	uint8_t BRK();	uint8_t BVC();
    uint8_t BVS();	uint8_t CLC();	uint8_t CLD();	uint8_t CLI();
    uint8_t CLV();	uint8_t CMP();	uint8_t CPX();	uint8_t CPY();
    uint8_t DEC();	uint8_t DEX();	uint8_t DEY();	uint8_t EOR();
    uint8_t INC();	uint8_t INX();	uint8_t INY();	uint8_t JMP();
    uint8_t JSR();	uint8_t LDA();	uint8_t LDX();	uint8_t LDY();
    uint8_t LSR();	uint8_t NOP();	uint8_t ORA();	uint8_t PHA();
    uint8_t PHP();	uint8_t PLA();	uint8_t PLP();	uint8_t ROL();
    uint8_t ROR();	uint8_t RTI();	uint8_t RTS();	uint8_t SBC();
    uint8_t SEC();	uint8_t SED();	uint8_t SEI();	uint8_t STA();
    uint8_t STX();	uint8_t STY();	uint8_t TAX();	uint8_t TAY();
    uint8_t TSX();	uint8_t TXA();	uint8_t TXS();	uint8_t TYA();

	// I capture all "unofficial" opcodes with this function. It is
	// functionally identical to a NOP
    uint8_t XXX();


    //sinais todas essas devem ocorrer a qualaquer momento e ascyncronas
    void clock(); //seta um ciclo de clock pra acontecer
    void reset(); //sinal pra resetar
    void irq(); // sinal de Interrupção de request
    void nmi(); //sinal de non-maskeble interrupt request


    uint8_t fetch();
    uint8_t fetched = 0x00;
    uint8_t temp = 0x0000; //convençãio de várieavel usada em todo lugar;
    uint16_t adrr_absolut = 0x00;
    uint8_t adrr_relative = 0x00;
    uint8_t opcode = 0x00;
   uint8_t clock_count = 0;
    uint8_t cycles = 0;

    //função de leitura le um endereço de 16 bits, cra uma flag de somente leitura
      uint8_t read(uint16_t a);
      //função de escrita  pega e escreve um endereço de 16 bits e, um data de 8bits
      void write(uint16_t a, uint8_t d);


      //busca e seta dentro  da classe flag o bit dependendo do bit interessado 
      uint8_t GetFlag(FLAGS6502 f);
      void SetFlag(FLAGS6502 f, bool v);


    struct INSTRUCTION{
          std::string name;
          uint8_t(olc6502::*operate)(void) = nullptr;
          uint8_t(olc6502::*addrmode)(void) = nullptr;
          uint8_t cycles = 0;
        };

 
    std::vector<INSTRUCTION> lookup;
     
      
};