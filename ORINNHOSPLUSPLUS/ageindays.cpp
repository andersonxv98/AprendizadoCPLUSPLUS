#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x;
    cin >> x;
    int  ano, mes, dias;
    
    ano = x/365;
    int d1 = x % 365;
    mes = 0;
    if(d1 >=30){
        mes= d1/30;
    }
    dias = d1 % 30;


    cout<<ano<<" ano(s)"<<endl;
    cout<<mes<<" mes(es)"<<endl;
    cout<<dias<<" dia(s)"<<endl;
    return 0;
}