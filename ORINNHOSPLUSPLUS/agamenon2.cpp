#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Ilha
{
private:
    int id;
public:
    Ilha(int id);
    ~Ilha();
};

Ilha::Ilha(int id)
{
    this->id  = id;
}

Ilha::~Ilha()
{delete this;
}


class Rota
{
private:
    int limite_de_uso;
    int recursos;
    Ilha ilhax;

    Ilha ilhay;
    
    void setIlhaX(Ilha ilhax){
        this->ilhax = ilhax;
    };
    void setIlhaY(Ilha  ilhay){
        this->ilhay = ilhay;
    };
    void setRecursos(int recursos){
        this->recursos = recursos;
    };
    void setLimite(int k){
        this->limite_de_uso = k;
    };
public:
    Rota(Ilha ilhax, Ilha ilhay, int Recursos, int limite_de_uso);
   

    ~Rota();
};

 Rota::Rota(Ilha ilhax, Ilha ilhay, int Recursos, int limite_de_uso){
        this->setIlhaX(ilhax);
        this->setIlhaY(ilhay);
        this->setRecursos(Recursos);
        this->setLimite(limite_de_uso);
    };

    Rota::~Rota(){
        return;
    }



int main(){
Ilha ilhay = Ilha(1);
Rota rot = Rota(ilhay, ilhay, 1, 0);


    return 0;
}