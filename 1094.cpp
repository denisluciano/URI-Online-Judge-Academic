#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int n,v;
    char ti;
    cin>>n;
    int r=0, s=0, c=0, t=0;

    for(int i=0; i<n; i++)
    {
        cin>>v>>ti;
        t+=v;
        if(ti=='R')
        {
            r+=v;
        }
        if(ti=='S')
        {
            s+=v;

        }
        if(ti=='C')
        {
            c+=v;

        }

    }
    cout<<"Total: "<<t<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;

    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<(c*100.0)/t<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<(r*100.0)/t<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<(s*100.0)/t<<" %"<<endl;




    return 0;
}
