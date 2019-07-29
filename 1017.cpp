#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double a,b;
    cin>>a>>b;

    double gas = a*b/12;

    cout<<fixed<<setprecision(3)<<gas<<endl;


    return 0;
}
