#include <iostream>
#include <string>
#include <vector>
using namespace std;




 vector<int> vetor_teste;
 
int main()
{
   string palavra_secreta  = "ABACATE";

   cout << palavra_secreta << endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;
   
    string palavra_escondida = "";

    int lengt  =  palavra_secreta.length();

    for (size_t l = 0; l < lengt; l++)
    {
        palavra_escondida += "_";
    }
    
    int chances  = lengt;

   while(nao_acertou && nao_enforcou){
       if(chances >= 0){ 

       cout << " Palavra secreta:  " << palavra_escondida << endl;
       cout << "Escolha uma letra" << endl;
       char letra_esq;
       cin >> letra_esq;

       cout << "letra escolhida a foi:   " << letra_esq << endl;

        int cont_ver = 0;

        for (size_t i = 0; i <lengt; i++)
        {   
            if(palavra_secreta[i] == letra_esq){
              palavra_escondida[i] = letra_esq;
              cont_ver++;
            }
            
         
        }
       if (cont_ver == 0){
           chances--;
       }

       }
        else{
           cout << "Acabou a Festa Mermao!" << endl;
           nao_enforcou = false;
       }
     
   }
   
}
