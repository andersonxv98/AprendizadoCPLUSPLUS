#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int inteiro;
    cin >> inteiro;

    int hr,min, seg;
    min = inteiro/60;
    seg = inteiro % 60;
    hr = 0;
    if (min >= 60){
        hr= min/60;
        min = min % 60;
    }
    cout<<hr<<":"<<min<<":"<<seg<<endl;
    return 0;
}