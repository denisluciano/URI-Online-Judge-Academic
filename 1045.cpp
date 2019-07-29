#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double d,e,f;
    double a,b,c;
    cin>>d>>e>>f;

    double ts = max(d,e);
    double maior =max(ts,f);

    double ts1 = min(d,e);
    double menor =min(ts1,f);

    double m =((d+e+f)-(maior+menor));

    a=maior;
    b=m;
    c=menor;



    if (a>=b+c){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else{
    if (pow(a,2)==(pow(b,2)+pow(c,2))){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    if (pow(a,2) > (pow(b,2)+pow(c,2))){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    if(pow(a,2)< (pow(b,2)+pow(c,2))){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(a==b && a==c){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    if(c==a && b!=c ){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    if(b==c && c!=a){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    if(a==b &&c!=b){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    }

    return 0;
}
