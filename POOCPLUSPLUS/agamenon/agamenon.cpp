#include "rota.cpp"
#include <iostream>

using namespace std;

int main() {
    cout<< "PROBLEMA DO AGAMENON------"<<endl;
    cout<< "---------------------------"<<endl;
    cout<<"INSIRA QUANTAS ILHAS E A QTT MAXIMA DE USO DE ROTAS: ";
    int n_ilhas, k; 
    cin>>n_ilhas; cin>>k;
    int n_rotas = n_ilhas -1;

    for (int i = 0; i < n_rotas; i++)
    {   int id_ilhax, id_ilhay, recusos;
        cout<<"INSIRA {ID ILHAx,ID ILHAy, QTTRECURSO}";
        cin>>id_ilhax ; cin>>id_ilhay, cin>>recusos;
        cout<<"ID ILHAX: "<<id_ilhax<<" "<<"ID ILHAy: "<<id_ilhay<<" "<<"RECURSOS: "<<recusos<<endl;
        Ilha obj_ilhax =    Ilha(id_ilhax);
        Ilha obj_ilhay =    Ilha(id_ilhay);
        cout<<"ECHO ILHAx: "<< obj_ilhax.getIlhaId()<<endl;
        cout<<"ECHO ILHAx: "<< obj_ilhay.getIlhaId()<<endl;
        cout<<"PASSOU DO INST DE ILHAS"<<endl;
        cout <<"RECURSOS: "<<recusos<<endl;
        cout<<"LIMITE:  "<<k<<endl;
        Rota _rota =    Rota(obj_ilhax, obj_ilhay, recusos, k);

        cout<<"PASSOU DO INST DE ROTAS"<<endl;
    }
    
    cout<<"ACABOU";
    return 0;
}