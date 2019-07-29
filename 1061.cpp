#include <iostream>

using namespace std;

int main ()
    {
        char txt[30];
        int d,h,m,s;
        int d2,h2,m2,s2;
        int aux1;
        int aux2;


        cin>>txt>>d;
        cin>>h>>txt>>m>>txt>>s;

        cin>>txt>>d2;
        cin>>h2>>txt>>m2>>txt>>s2;


        aux1=86400*d+h*3600+60*m+s;
        aux2=86400*d2+h2*3600+60*m2+s2;
        int aux3=aux2-aux1;

        cout<<aux3/86400<<" dia(s)"<<endl;
        aux3=aux3%86400;
        cout<<aux3/3600<<" hora(s)"<<endl;
        aux3=aux3%3600;
        cout<<aux3/60<<" minuto(s)"<<endl;
        aux3=aux3%60;
        cout<<aux3<<" segundo(s)"<<endl;
        
        return 0;

    }
