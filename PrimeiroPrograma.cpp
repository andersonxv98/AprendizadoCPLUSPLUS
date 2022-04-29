//#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
   std::cout << "**********************" << endl;
   std::cout << "* Mae Dina GamaPlays *" << endl;
   std::cout << "**********************" << endl;
   std::cout << "Teste";

   int tentativas = 0;

   string dificuldade;

   std::cout << "Escolha a dificuldade:  Fácil(F), Médio(M), Difícil(D)" <<endl ;
   cin >> dificuldade;

   if(dificuldade == "F"){
      tentativas = 15;
   }
   else if(dificuldade == "M"){
      tentativas = 10;
   }
   else{
      tentativas = 5;
   }


   int variavel = 2;
   string valr("sodkas");
  
   std::cout << valr << endl;

   int *pont = &variavel;

   
   srand(time(NULL));
   int secreto  = rand() % 100;
   
   
   std::cout << pont << endl;

   
   int a = 0;
   
   float pontuacao = 1000.0;
   while(tentativas > 0){
      a++;
      std::cout << "Tentativa numero: " << a << endl;
      tentativas--;
      std::cout << "qualteu chute: " << endl;
      
      cin >> variavel;
      
      std::cout << "Nove new gameplays: " << variavel << endl;
      if(secreto == variavel){
         std::cout << "VOCE ACERTOU ACEROLA!";
         std::cout << "Numero de Tentativas restantes: " << tentativas << endl;
         //cout.precision(2);
         //cout  << fixed;
         std::cout << "pontuacao:  " << pontuacao << endl;
         tentativas  = 0;
      }
      else if(secreto > variavel){
         std::cout << "O numero secreto é maior" << endl;
      }
      else if(secreto < variavel){
         std::cout << "O numero secreto é menor" << endl;
      }
        
      double pnt_perdidos = ((variavel + secreto)/2.0);
      pontuacao = pontuacao - pnt_perdidos;
    
   }
   if (tentativas == 0){
         std::cout << "VocePerdeu"<< endl;
      }
}