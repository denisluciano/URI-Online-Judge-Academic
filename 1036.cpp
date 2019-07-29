#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main ()
{
    double a,b,c;
    cin>>a>>b>>c;

    double delta = b*b-4*a*c;

    if (a==0 || delta <0){
        cout<<"Impossivel calcular"<<endl;
    }
    else{
        double x1= (-b+sqrt(delta))/(2*a);
        double x2= (-b-sqrt(delta))/(2*a);
        cout<<fixed<<setprecision(5)<<"R1 = "<<x1<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<x2<<endl;
    }


    return 0;
}
