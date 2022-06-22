#include <iostream>
#include <iomanip>
#include <vector>
#include <set>


using namespace std;

int main(){
    cout <<"inicializou"<<endl;
    int val;
    cin>>val;
    int aux = val;
    int notas[] = {100, 50, 20, 10,5, 2,1};
    bool a = val > 0;
    vector<int> nodas;
    while(a){
        for(int x :notas){
            while (val >= x){
                nodas.push_back(x);
                val -= x;
                //cout<<"ENTROU"<<endl;
            }
        } 
        if(val <= 0){
            a = false;
        }  
    }
    int resul[] = {0,0,0,0,0,0,0};
    for(int tr :nodas){
        if(tr == 100){
            resul[0] += 1;
        }
        else if(tr == 50){
            resul[1] += 1;
        }
        else if(tr == 20){
            resul[2] += 1;
        }
        else if(tr == 10){
            resul[3] += 1;
        }
        else if(tr == 5){
            resul[4] += 1;
        }
        else if(tr == 2){
            resul[5] += 1;
        }
        else if(tr == 1){
            resul[6] += 1;
        }
    }
    cout<<aux<<endl;
    cout<<resul[0]<<" nota(s) de R$ 100,00"<<endl;
    cout<<resul[1]<<" nota(s) de R$ 50,00"<<endl;
    cout<<resul[2]<<" nota(s) de R$ 20,00"<<endl;
    cout<<resul[3]<<" nota(s) de R$ 10,00"<<endl;
    cout<<resul[4]<<" nota(s) de R$ 5,00"<<endl;
    cout<<resul[5]<<" nota(s) de R$ 2,00"<<endl;
    cout<<resul[6]<<" nota(s) de R$ 1,00"<<endl;


    return 0;
}