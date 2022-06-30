#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double entrada;
    cin>> entrada;
    if(entrada >= 0 && entrada <= 25){
        cout<<"Intervalo [0,25]"<<endl;
    } 
    else if(entrada > 25 && entrada <= 50){
        cout<<"Intervalo (25,50]"<<endl;
    }
    else if(entrada > 50 && entrada <= 75){
        cout<<"Intervalo (50,75]"<<endl;
    }
     else if(entrada > 75 && entrada <= 100){
        cout<<"Intervalo (75,100]"<<endl;
    }
    else{
        cout<<"Fora de intervalo"<<endl;
    }
    return 0;
}