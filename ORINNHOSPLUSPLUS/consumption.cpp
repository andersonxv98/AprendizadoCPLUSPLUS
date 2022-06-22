#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y;
    cin>>x>>y;

    double result = x/y;
    cout<<fixed<<setprecision(3);
    cout<<result<<" km/l"<<endl;

    return 0;
}
