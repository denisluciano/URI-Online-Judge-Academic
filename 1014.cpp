#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    double b;

    cin>>a>>b;
    double con = a/b;

    cout<<fixed<<setprecision(3)<<con<<" km/l"<<endl;

    return 0;
}
