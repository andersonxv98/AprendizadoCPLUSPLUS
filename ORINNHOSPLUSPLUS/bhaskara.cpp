#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    double a, b ,c;
    cin>>a>>b>>c;
    double r1, r2;
    double delta;
    delta = (b *  b) - (4 * a * c);
    bool possivel = true;
    if (a  == 0){
        possivel = false;
    }
    else if (delta < 0){
        possivel = false;
    }
    r1 = (-b + sqrt(delta))/ (2 *a);
    r2  = (-b - sqrt(delta))/ (2 *a);
    cout<<fixed<<setprecision(5)<<endl;
    if (possivel){
        cout<<"R1 = "<<r1<<endl;
        cout<<"R2 = "<<r2<<endl;
    }
    else{
        cout<<"Impossivel calcular";
    }

    return 0;
}