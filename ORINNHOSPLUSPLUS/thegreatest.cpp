#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b , c;
    cin>>a>>b>>c;
    int maior =0;
    if (a > maior){
        maior = a;
    }
    if(b > maior){
        maior= b;
    }
    if (c > maior){
        maior= c;
    }

    
    cout<<maior<<" eh o maior"<<endl;

    return 0;
}