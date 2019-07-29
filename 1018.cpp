#include <iostream>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    cout<<a<<endl;
    int n100=0;
    int n50=0;
    int n20=0;
    int n10=0;
    int n5=0;
    int n2=0;
    int n1=0;

    while (a>=1){
    if (a>=100){
        a=a-100;
        n100++;
    }
    if (a>=50 &&a<100){
        a=a-50;
        n50++;
    }
    if (a>=20 &&a<50){
        a=a-20;
        n20++;

    }
    if (a>=10 &&a<20){
        a=a-10;
        n10++;
    }
    if (a>=5 &&a<10){
        a=a-5;
        n5++;
    }
    if (a>=2 &&a<5){
        a=a-2;
        n2++;
    }
    if (a>=1 &&a<2){
        a=a-1;
        n1++;
    }
    }

    cout<<n100<<" nota(s) de R$ 100,00"<<endl;
    cout<<n50<<" nota(s) de R$ 50,00"<<endl;
    cout<<n20<<" nota(s) de R$ 20,00"<<endl;
    cout<<n10<<" nota(s) de R$ 10,00"<<endl;
    cout<<n5<<" nota(s) de R$ 5,00"<<endl;
    cout<<n2<<" nota(s) de R$ 2,00"<<endl;
    cout<<n1<<" nota(s) de R$ 1,00"<<endl;



    return 0;
}
