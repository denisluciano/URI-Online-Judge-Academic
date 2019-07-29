#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a=0;
    int m=0;
    int d=0;

    while (n>=1){
        if (n>=365){
            n-=365;
            a++;
        }
        if(n>=30 && n<365){
            n-=30;
            m++;
        }
        if(n>=1 && n<30){
            n-=1;
            d++;
        }

    }
    cout<<a<<" ano(s)"<<endl;
    cout<<m<<" mes(es)"<<endl;
    cout<<d<<" dia(s)"<<endl;
    return 0;
}
