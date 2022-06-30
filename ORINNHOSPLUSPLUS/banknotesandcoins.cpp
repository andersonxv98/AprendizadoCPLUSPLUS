#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

vector<double> vet_r;

bool exec(double entrada){
    if (entrada > 0.0){
        return true;
    }
    return false;
}

double deaf(double val, double ent){
    if (ent >= val){
        ent = ent - val;
        vet_r.push_back(val);
        if (ent>= val){
          ent =  deaf( val, ent);
        }
        else{
            return ent;
        }
    }
    return ent;
}
int main (){
    double entrada;
    double valores[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.50, 0.25, 0.10, 0.5, 0.01};
    cin>>entrada;
    for(double x: valores){
            entrada = deaf(x, entrada);
    }
    int resul[] = {0,0,0,0,0,0,0,0,0,0,0,0};
    for (double y : vet_r){
        if (y == 100){
            resul[0] += 1;
        }
        else if (y == 50){
            resul[1] += 1;
        }
        else if (y == 20){
            resul[2] += 1;
        }
        else if (y == 10){
            resul[3] += 1;
        }
        else if (y == 5){
            resul[4] += 1;
        }
        else if (y == 2){
            resul[5] += 1;
        }
        else if (y == 1){
            resul[6] += 1;
        }
        else if (y == 0.5){
            resul[7] += 1;
        }
        else if (y == 0.25){
            resul[8] += 1;
        }
        else if (y == 0.10){
            resul[9] += 1;
        }
        else if (y == 0.05){
            resul[10] += 1;
        }
        else if (y == 0.01){
            resul[11] += 1;
        }
    }

    cout<<"NOTAS:"<<endl;
    cout<<resul[0]<<" nota(s) de R$ 100.00"<<endl;
    cout<<resul[1]<<" nota(s) de R$ 50.00"<<endl;
    cout<<resul[2]<<" nota(s) de R$ 20.00"<<endl;
    cout<<resul[3]<<" nota(s) de R$ 10.00"<<endl;
    cout<<resul[4]<<" nota(s) de R$ 5.00"<<endl;
    cout<<resul[5]<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<resul[6]<<" moeda(s) de R$ 1.00"<<endl;
    cout<<resul[7]<<" moeda(s) de R$ 0.50"<<endl;
    cout<<resul[8]<<" moeda(s) de R$ 0.25"<<endl;
    cout<<resul[9]<<" moeda(s) de R$ 0.10"<<endl;
    cout<<resul[10]<<" moeda(s) de R$ 0.05"<<endl;
    cout<<resul[11]<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}