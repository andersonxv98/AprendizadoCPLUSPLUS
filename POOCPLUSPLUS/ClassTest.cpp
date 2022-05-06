//ARquivo main
#include "Conta.h"
//Classe de instancia
class ClassTest
{
private:
    /* data */
public:
    ClassTest(/* args */);
    ~ClassTest();
};

ClassTest::ClassTest(/* args */)
{
    int numero_conta;
    cout << "Insira o numero da conta" << endl;

    cin >> numero_conta;
    int cpf_titular;

    cout<< "Insira o cpf" << endl;
    cin>>cpf_titular;
    string nome_titular;
    
    cout<< "Insira o nome" << endl;
    cin>>nome_titular;
    float saldo;

    cout<< "Insira o saldo" << endl;
    cin>>saldo;


    Conta _conta2 =  Conta(02,  423, "aristeu", 10);
    Conta _conta =  Conta(numero_conta,  cpf_titular, nome_titular, saldo);
    saldo = _conta.getSaldo();    int cpf = _conta.getCpf_titular();
    cout << "Saldo: " << saldo << endl;
    cout<< "CPF: " << cpf << endl;

    cout << "insira  o valor do deposito: ";
    float deposito;
    cin >> deposito;
    _conta.Depositar(deposito);

    cout<< "Valor de Transferencia";
    float trans_val;
    cin >> trans_val;

    _conta.Transferencia(_conta2,trans_val);
    cout<< "-----------------------"<<endl;
    cout <<"valor saldo conta 2 : "<< _conta2.getSaldo();
}

ClassTest::~ClassTest()
{
}
 