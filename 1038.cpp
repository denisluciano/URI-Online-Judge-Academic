#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double cq= 4.00, xs= 4.50, xb= 5.00, ts= 2.00, rf= 1.50;
    int a, b;
    double total;
    cin>>a>>b;

    if(a==1){
         total= b*cq;
    }
     if(a==2){
         total= b*xs;
    }
     if(a==3){
         total= b*xb;
    }
     if(a==4){
         total= b*ts;
    }
     if(a==5){
         total= b*rf;
    }
    cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
    return 0;
}
