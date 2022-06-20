#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout<<fixed<<setprecision(2);
    int codprod1, codprod2;
    int numbprod1, numbprod2;
    double precoprod1, precoprod2;
    double total;
    cin>>codprod1;
    cin>>numbprod1;
    cin>>precoprod1;
    cin>>codprod2;
    cin>>numbprod2;
    cin>>precoprod2;
    total = (numbprod1 * precoprod1) + (numbprod2 * precoprod2);
    

    cout<<"VALOR A PAGAR: R$ "<<total<<endl;
        
    return 0;
}