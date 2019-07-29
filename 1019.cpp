#include <iostream>
using namespace std;
int main ()
{
    long long int n;
    long long int h=0;
    long long int m=0;
    long long int s=0;
    cin>>n;

    while (n>0){
        if (n>=3600){
            h++;
            n -=3600;
        }
        if (n>=60 && n<3600){
            m++;
            n-=60;
        }
        if (n>=1 && n<60){
            s++;
            n-=1;
        }
    }
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}
