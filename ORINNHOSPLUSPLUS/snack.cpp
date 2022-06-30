#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int cod, qtd;
    cin>>cod>>qtd;
    double preco[] = {4.00, 4.50, 5.00, 2.00, 1.50};

    double total = preco[cod -1] * qtd;
    cout<<fixed<<setprecision(2);
    cout<<"Total: R$ "<<total<<endl;

    return 0;
}