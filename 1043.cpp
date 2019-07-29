#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    bool c1= (abs(b-c)<a && a<b+c);
    bool c2= (abs(a-c)<b && b<a+c);
    bool c3= (abs(a-b)<c && c<a+b);

    if(c1&&c2&&c3){
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;
    }
    else{
        double p= ((a+b)*c)/2;
        cout<<fixed<<setprecision(1)<<"Area = "<<p<<endl;
    }
    return 0;
}
