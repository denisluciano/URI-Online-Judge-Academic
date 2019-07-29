#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;

    double m = (a+b+abs(a-b))/2;
    double res =(m+c+abs(m-c))/2;

    cout<<res<<" "<<"eh"<<" "<<"o"<<" ""maior"<<endl;

    return 0;
}
