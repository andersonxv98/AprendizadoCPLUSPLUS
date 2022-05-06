#include <iostream>
#include <string>
#include <vector>
#include<ctime>
using namespace std;

  
    string ve_letras_erradas[5] = {};
    vector<int> vetor_teste;
     string ve_palavra_secreta[]  = {"ABACATE", "PERA", "UVA", "MACA", "LARANJA", "ABACAXI", "ACEROLA", "CAJU", "MELANCIA", "PITANGA"};

     string palavra_secreta(){
           srand(time(NULL));
            int secreto  = rand() % 9;
         return ve_palavra_secreta[secreto];
     } ;

    bool nao_enforcou(){
        int valor_tamanh_vetor = ve_letras_erradas->length();
       
        if(valor_tamanh_vetor >5){
            cout << "Voce Foi Enformaco :C " << endl;
            return false;
        }
        return true;
    }
    string palavrita  = palavra_secreta();
    int lengt  =  palavrita.length();

    string palavra_escondida = "";

   bool ver_napalavra(string letra_esq){
       bool achou = false;
       for (size_t i = 0; i <lengt; i++)
        {   
            if(palavrita[i] == (letra_esq[0]))
            {
              palavra_escondida[i] = letra_esq[0];
                
               achou = true;  
            }
        }
        if(achou){
            return true;
        }
        return false;
        }

    bool nao_acertou(string palavra_ApenaspalarasPeqns){
       
        if(palavra_ApenaspalarasPeqns !=palavrita){
            return true;
        }
        else{
        cout << "PARABENS!!!! VOCE ACERTOU MIZERAVI, MININO BAUM SO" << endl;
        cout << palavrita << endl;
        return false;
        }
    }
 
int main()
{
    for(size_t l = 0; l < lengt; l++)
    {
        palavra_escondida += "-";
    } 
  
   while(nao_acertou(palavra_escondida) && nao_enforcou()){
      
        cout << " Palavra secreta:  " << palavra_escondida << endl;

        cout << "ve_terra_erradas: "<< ve_letras_erradas->c_str()<<endl;
       
       cout << "Escolha uma letra:  ";
       string letra_esq;
       cin >> letra_esq;

        if(ver_napalavra(letra_esq) == false){
            ve_letras_erradas->append(letra_esq);
        }
   }
}