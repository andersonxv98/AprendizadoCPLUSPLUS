
#include  "rota.h"

Rota::Rota(Ilha ilhax, Ilha ilhay, int recurso, int limite_us){
    this->setIlhaY(ilhay);
    this->setIlhaX(ilhax);
    this->setRecurso(recurso);
    this->setLimiteUsado(limite_us);
}

Rota::~Rota(){
    delete this;
}

Ilha Rota::getIlhay(){
    return *this->ilhay;
}

Ilha Rota::getIlhax(){
    return *this->ilhax;
}

int Rota::getRecurso(){
    return this->recurso;
}

int Rota::getLimiteUsado(){
    return this->limite_usado;
}

void Rota::setLimiteUsado(int limite_usado){
    std::cout<<"setLimiteUsado";
    this->limite_usado = limite_usado;
}

void Rota::setIlhaY(Ilha  ilhay){
    this->ilhay = &ilhay;
}

void Rota::setIlhaX(Ilha  ilhax){
    this->ilhax = &ilhax;
}

 void Rota::setRecurso(int recurso){
    this->recurso = recurso;
}
