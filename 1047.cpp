#include <iostream>
using namespace std;

int  main()
{
    int h1,m1,h2,m2;
    cin>>h1>>m1>>h2>>m2;
    int tranm1 = h1 * 60 + m1;
    int tranm2 = h2 * 60 + m2;
    int total =0;
    int hr,ma;


    if(tranm1>tranm2){
        total =1440 -tranm1 + tranm2;
        hr =total /60;
        ma = total%60;
        cout<<"O JOGO DUROU "<<hr<<" HORA(S) E "<<ma<<" MINUTO(S)"<<endl;

    }
    if(tranm2>tranm1){
        total = tranm2 -tranm1;
        hr = total/60;
        ma = total %60;
        cout<<"O JOGO DUROU "<<hr<<" HORA(S) E "<<ma<<" MINUTO(S)"<<endl;
    }
    if (tranm1==tranm2){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }


    return 0;
}
