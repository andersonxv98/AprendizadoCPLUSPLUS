#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x;
    cin >> x;
    int resto, ano, mes, dias;
    
    mes = x/30;
    dias   = x% 30;
    ano = 0;
    if (mes >= 12){
        ano = x/ 365;
        
        mes = mes % 12;
    }

    cout<<ano<<" ano(s)"<<endl;
    cout<<mes<<" mes(es)"<<endl;
    cout<<dias<<" dia(s)"<<endl;
    return 0;
}