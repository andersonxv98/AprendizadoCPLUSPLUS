#include <iostream>
#include <string>

using namespace std;

class Conta
{

private: 
    int numero_conta;
    int cpf_titular;
    string nome_titular;
    float saldo;
    /* data */
    //SETTERs
    void  setNumeroConta(int numero_conta){
        this->numero_conta = numero_conta;
        return;
    };

    void setCpf_titular(int cpf_titular){
        this->cpf_titular = cpf_titular;
        return;
    }

    void setNomeTitular(string nome_titular){
        this->nome_titular = nome_titular;
        return;
    }

    void setSaldo(float saldo){
        this->saldo = saldo;
        return;
    }

    //GETTERS
   


    bool tryTransferencia(float valorTransferencia){
        if (this->saldo >= valorTransferencia){
            return true;
        }
        return false;
    }

    
    


public:
    Conta(int numero_conta, int cpf_titular, string nome_titular, float saldo){
        
        setNumeroConta(numero_conta);
        setCpf_titular(cpf_titular);
        setNomeTitular(nome_titular);
        setSaldo(saldo);
    }
    ~Conta(){
        delete this;
    }

     int getNumeroConta(){
        return this->numero_conta;
    }

    int getCpf_titular(){
        return this->cpf_titular;
    }

    string getNomeTitular(){
        return this->nome_titular;
    }

    float getSaldo(){
        return this->saldo;
    }


    void Sacar(float valorDoSaque){
        if(valorDoSaque <= this->saldo && valorDoSaque > 0){
            this->saldo -= valorDoSaque;
            cout<< "Valor do Saque: " <<valorDoSaque << "  Saldo: " << this->saldo << endl;
        }
        else{
            cout << "Valor de saque maior que saldo disponível" << endl;
        }
        return;
    }

    void Depositar(float valorDoDeposito){
        if(valorDoDeposito >0){
            this->saldo += valorDoDeposito;
            cout<< "Valor depositado: " <<valorDoDeposito << "  Saldo: " << this->saldo << endl;
        }
        else{
            cout << "Valor depositado é inválido" << endl;
        }
        return;
    }

    void Transferencia(Conta _conta, float valorTransferencia){
        bool valid = tryTransferencia(valorTransferencia);
        if (valid){
            this->Sacar(valorTransferencia);
            _conta.Depositar(valorTransferencia);
            cout <<"Transferencia Realizada com sucesso para:  "<<endl;
            cout<< "NOme do titular: " << _conta.getNomeTitular() <<endl;
            cout<< "ID da Conta: " << _conta.getNumeroConta() << endl;
            cout<< "cpf do titular: " << _conta.getCpf_titular() << endl;
            cout<< "valor transferido: " << valorTransferencia << endl;
        }
        else{
            cout << "Valor de transferencia indisponivel";
        }
        return;
    }
};

