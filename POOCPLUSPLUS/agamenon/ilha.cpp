
#include "ilha.h"



Ilha::Ilha(int iden){
    this->setID(iden);
}

Ilha::~Ilha(){
    delete this;
}

int Ilha::getIlhaId(){
    return this->ident;
}

void Ilha::setID(int iden){
    this->ident = iden;
}
