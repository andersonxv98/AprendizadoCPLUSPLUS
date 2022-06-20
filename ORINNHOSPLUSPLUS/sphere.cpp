#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    double raio;
    double volume;
    cin>>raio;
    
    double p1 = 4/3.0;
  
    double p2 = 3.14159;
    double p3 = raio * raio * raio;
    volume = p1 * p2 * p3;
    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<volume<<endl;

    return 0;
}
