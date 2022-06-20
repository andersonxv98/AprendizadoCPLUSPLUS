#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    double A;
    double B;
    double C;
    cin>>A;
    cin>>B;
    cin>>C;

    double area_traingulo_retangulo = (A * C)/2;
    double area_criculo = 3.14159 * (C * C);
    double area_trapezio = ((A + B)* C)/ 2;
    double area_quadrado = B * B;
    double area_retangulo = (A * B);
    
    cout<<fixed<<setprecision(3);

    cout<<"TRIANGULO: "<<area_traingulo_retangulo<<endl;
    cout<<"CIRCULO: "<<area_criculo<<endl;
    cout<<"TRAPEZIO: "<<area_trapezio<<endl;
    cout<<"QUADRADO: "<<area_quadrado<<endl;
    cout<<"RETANGULO: "<<area_retangulo<<endl;
    return 0;
}
