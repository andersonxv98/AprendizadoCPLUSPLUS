#include <iostream>
#include  <iomanip>

using namespace std;

int main(){
    cout<<fixed<<setprecision(1);
    double N1, N2, N3, N4;
    cin>>N1>>N2>>N3>>N4;
    double avarege =    (N1*2 + N2*3 + N3*4 + N4*1)/4;
    cout<<"Media: "<<avarege<<endl;
    if (avarege >= 7.0){
        cout<<"Aluno aprovado"<<endl;

    }
    else if (avarege >= 5 && avarege < 7){
        cout<<"Aluno em exame"<<endl;
        double ex;
        cin >> ex;
        cout<<"Nota do exame"<<ex<<endl;
        double f =  (ex + avarege)/2;
        if(f >= 5){
            cout<<"Aluno aprovado"<<endl;
        }
        else{
            cout<<"Aluno reprovado"<<endl;
        }
        cout<<"Nedia final"<<f<<endl;
    }
    else {
        cout<<"Aluno reprovado"<<endl;
    }
    return 0;
}
