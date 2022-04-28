//#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
   std::cout << "**********************" << endl;
   std::cout << "* Mae Dina GamaPlays *" << endl;
   std::cout << "**********************" << endl;
   std::cout << "Teste";

   int variavel = 2;
   string valr("sodkas");
  
   std::cout << valr << endl;

   int *pont = &variavel;
   int secreto  = 34;
   cout << pont << endl;


   int a = 0;
   int tentativas = 0;
   float pontuacao = 1000.0;
   while(a == 0){
      
      tentativas++;
      cout << "qualteu chute: " << endl;
      
      cin >> variavel;
      
      cout << "Nove new gameplays: " << variavel << endl;
      if(secreto == variavel){
         cout << "VOCE ACERTOU ACEROLA!";
         cout << "Numero de Tentativas: " << tentativas << endl;
         cout << "pontuacao:  " << pontuacao << endl;
         a = 1;
      }
      else if(secreto > variavel){
         cout << "O numero secreto é maior" << endl;
      }
      else if(secreto < variavel){
         cout << "O numero secreto é menor" << endl;
      }
      double pnt_perdidos = abs((variavel - secreto)/2.0);
      pontuacao = pontuacao - pnt_perdidos;
   }
}