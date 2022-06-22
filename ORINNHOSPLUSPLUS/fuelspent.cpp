#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double tempo_viajem, velocidade_media;
    cin>>tempo_viajem>>velocidade_media;
    double litros;
    double distancia = velocidade_media* tempo_viajem;
    litros  = distancia / 12;
    cout<<fixed<<setprecision(3);
    cout<<litros<<endl;

    return 0;
}