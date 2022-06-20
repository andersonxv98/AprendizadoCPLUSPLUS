#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <list>

using namespace std;

class Ilha
{
    private:
        int idie;
    public:
        Ilha(int id);
        ~Ilha();
};

     Ilha::Ilha(int idie)
    {
        this->idie= idie;
    }

    Ilha::~Ilha()
    {
        delete this;
    }


class Rotas
{
private:
    int limite_de_uso;
    int Recursos;
    Ilha ilhax;

    Ilha ilhay;
    
    void setIlhaX(Ilha ilhax);
    void setIlhaY(Ilha  ilhay);
    void setRecursos(int recursos);
    void setLimite(int k);
public:
    Rotas::Rotas(Ilha ilhax, Ilha ilhay, int Recursos, int limite_de_uso)
    {
        this->setIlhaX(ilhax);
        this->setIlhaY(ilhay);
        this->setRecursos(Recursos);
        this->setLimite(limite_de_uso);
    }

    Rotas::~Rotas()
    {
        delete this;
    }

    void Rotas::setIlhaX(Ilha  ilhax){
        this->ilhax = ilhax;
    }
    void Rotas::setIlhaY(Ilha ilhay){
        this->ilhay = ilhay;
    }

};


 list<Rotas> L_rotas;






int main{
    int ilhas, max_n;
    cin>>ilhas; cin>>max_n;

   int  rotas = ilhas - 1;
    for (size_t i = 0; i < rotas; i++)
    {   
        int U, V, C;
        cin>>U; cin>>V; cin>>C;
        //int visitado = 0;
        Ilha  ilhax = Ilha(U);
        Ilha ilhay = Ilha(V);
        Rotas rt =  Rotas(ilhax, ilhay, C, max_n);
        L_rotas.push_back(rt);


    }

return 0;

}