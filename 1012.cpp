#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double a,b,c;
    cin>>a>>b>>c;

    double tri = (a*c)/2;
    cout<<fixed<<setprecision(3)<<"TRIANGULO:"<<" "<<tri<<endl;

    double cir= 3.14159*(c*c);
    cout<<fixed<<setprecision(3)<<"CIRCULO:"<<" "<<cir<<endl;

    double tra = ((a+b)*c)/2;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO:"<<" "<<tra<<endl;

    double qua = b*b;
    cout<<fixed<<setprecision(3)<<"QUADRADO:"<<" "<<qua<<endl;

    double re =a*b;
    cout<<fixed<<setprecision(3)<<"RETANGULO:"<<" "<<re<<endl;

    return 0;
}
