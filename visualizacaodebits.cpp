#include <iostream>
#include <string>
#include <vector>
#include<ctime>
using namespace std;



  
 
int main()
{
    union visualizacaodebits
    {
        /* data */
    
    
        struct A 
        {
            char semuso: 1;
            char sw2:1;
            char sw1: 1;
            char estado: 2;
            char valor: 3;
           
        };
        char reg= 0x00;
       
        };
         visualizacaodebits a_ =  visualizacaodebits{};
        cout << "a:reg: " << a_.reg <<endl;
     
    // cout << "Sem uso: " << a_ << end//l;
     //cout << "Sem uso: " << a_ << endl;
}