

#include <iostream>

#include "ilha.h"



using namespace std;

class Rota
{
private:
    Ilha *ilhax ;
    Ilha *ilhay;
    int recurso;
    int limite_usado;

   void setIlhaX(Ilha ilhax);
   void setIlhaY(Ilha ilhay);
   void setRecurso(int recurso);
   void setLimiteUsado(int limite_usado);
public:
    Rota(Ilha ilhax, Ilha ilhay, int recurso, int limite_us);
    ~Rota();
    Ilha  getIlhax();
    Ilha getIlhay();
    int getRecurso();
    int getLimiteUsado();
};
