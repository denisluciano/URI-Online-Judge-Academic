#include <iostream>

using namespace std;

int main ()
{
    int x=3,y=3;
    int soma;


    while(x>0 && y>0)
    {
        soma=0;
        cin>>x>>y;
        if(x<=0 || y<=0)
            break;

        if(x>y)
        {
            for(int i=y; i<=x;i++)
            {

                    soma+=i;

                cout<<i<<" ";
            }
        }
        if(x<=y)
        {
            for(int i=x; i<=y;i++)
            {

                    soma+=i;

                cout<<i<<" ";
            }
        }

        cout<<"Sum="<<soma<<endl;
    }



    return 0;
}
