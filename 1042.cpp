#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d=a,e=b,f=c;

    int ts = max(a,b);
    int maior =max(ts,c);

    int ts1 = min(a,b);
    int menor =min(ts1,c);

    int m =((a+b+c)-(maior+menor));




    cout<<menor<<endl;
    cout<<m<<endl;
    cout<<maior<<endl;
    cout<<endl;

    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;

    return 0;
}
