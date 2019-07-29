#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int n;
    int x=3,y=3;
    int soma;
    cin>>n;


    for(int i=n; i>0 ; i--)
    {
        cin>>x>>y;
        if(y==0)
        {
            cout<<"divisao impossivel"<<endl;
            continue;
        }
        cout<<fixed<<setprecision(1)<<x/(y*1.0)<<endl;
    }



    return 0;
}
