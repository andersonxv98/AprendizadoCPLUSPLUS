#include <iostream>
#include <iomanip>
#include <vector>

using namespace std; 

vector<int> tt = {0,0, 0, 0, 0, 0, 0, 0, 0,0,0,0}; 
vector<float> vet_verific = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00,0.5, 0.25, 0.10, 0.05, 0.01};



 void verificaRest(float value, int i){
    //cout<<setprecision(2);
    
    float var_vet = vet_verific[i];

    //cout<<"VALue: "<< value<< "---------" << "comparado com: "<<var_vet  <<endl;

    if((value >= var_vet)){
           //cout << "condition: "  << endl;
          tt[i] += 1;
          value = value - var_vet;
          if(value >= var_vet){
            verificaRest(value, i);
          }
          else{
              if(i < 11){
                verificaRest(value, i+1);
              }
              
          }
        }
    else if(value < var_vet && value > 0){
         verificaRest(value, i+1);
    }
    
   
}


int main() {
    cout<<fixed<<setprecision(2);
    float  A;
    cin>> A;
    verificaRest(A, 0);

    cout<<"NOTAS:" <<endl;
    cout<<tt[0]<<" nota(s) de R$ 100.00"<<endl;
    cout<<tt[1]<<" nota(s) de R$ 50.00"<<endl;
    cout<<tt[2]<<" nota(s) de R$ 20.00"<<endl;
    cout<<tt[3]<<" nota(s) de R$ 10.00"<<endl;
    cout<<tt[4]<<" nota(s) de R$ 5.00"<<endl;
    cout<<tt[5]<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;

    cout<<tt[6]<<" moeda(s) de R$ 1.00"<<endl;
    cout<<tt[7]<<" moeda(s) de R$ 0.50"<<endl;
    cout<<tt[8]<<" moeda(s) de R$ 0.25"<<endl;
    cout<<tt[9]<<" moeda(s) de R$ 0.10"<<endl;
    cout<<tt[10]<<" moeda(s) de R$ 0.05"<<endl;
    cout<<tt[11]<<" moeda(s) de R$ 0.01"<<endl;

    
    return 0;
}