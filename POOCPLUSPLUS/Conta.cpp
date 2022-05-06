//#pragma once
#include "Conta.h"


class Conta{
    private:
        int numero_conta;
        int cpf_titular;
        string nome_titular;
        float saldo;
      
public:
    Conta(int numero_conta, int cpf_titular, string nome_titular, float saldo);
    ~Conta();

 int getNumeroConta();
 int getCpf_titular();
 string getNomeTitular();
float getSaldo();
void Sacar(float valorDoSaque);
void Depositar(float valorDoDeposito);
void Transferencia(Conta _conta, float valor);
};

