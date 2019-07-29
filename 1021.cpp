#include <iostream>
using namespace std;
int main ()
{

    double a;
    cin>>a;
    a=a*100;

    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0;
    int m100=0, m50=0, m25=0, m10=0, m5=0, m1=0;


    while (a>=1){
    if (a>=10000){
        a=a-10000;
        n100++;
    }
    if (a>=5000 &&a<10000){
        a=a-5000;
        n50++;
    }
    if (a>=2000 &&a<5000){
        a=a-2000;
        n20++;

    }
    if (a>=1000 &&a<2000){
        a=a-1000;
        n10++;
    }
    if (a>=500 &&a<1000){
        a=a-500;
        n5++;
    }
    if (a>=200 &&a<500){
        a=a-200;
        n2++;
    }
    if (a>=100 &&a<200){
        a=a-100;
        m100++;
    }
    if (a>=50 &&a<100){
        a-=50;
        m50++;
    }
    if (a>=25 && a<50){
        a-=25;
        m25++;
    }
    if (a>=10 && a<25){
        a-=10;
        m10++;
    }
    if(a>=5 && a<10){
        a-=5;
        m5++;
    }
    if(a>=1 && a<5){
        a-=1;
        m1++;
    }
    }
    cout<<"NOTAS:"<<endl;
    cout<<n100<<" nota(s) de R$ 100.00"<<endl;
    cout<<n50<<" nota(s) de R$ 50.00"<<endl;
    cout<<n20<<" nota(s) de R$ 20.00"<<endl;
    cout<<n10<<" nota(s) de R$ 10.00"<<endl;
    cout<<n5<<" nota(s) de R$ 5.00"<<endl;
    cout<<n2<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<endl;
    cout<<m100<<" moeda(s) de R$ 1.00"<<endl;
    cout<<m50<<" moeda(s) de R$ 0.50"<<endl;
    cout<<m25<<" moeda(s) de R$ 0.25"<<endl;
    cout<<m10<<" moeda(s) de R$ 0.10"<<endl;
    cout<<m5<<" moeda(s) de R$ 0.05"<<endl;
    cout<<m1<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}
