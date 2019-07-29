#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double x;
    double soma=0;


    for(int i=0;i<2; )
    {
        cin>>x;
        if(x>=0 && x<=10)
        {
            if(i==0)
            {
                i++;
                soma=x;
                //cout<<"nota invalida"<<endl;
            }
            else
            {
                soma+=x;
                break;
            }
        }
        else
            cout<<"nota invalida"<<endl;

    }


    cout<<fixed<<setprecision(2)<<"media = "<<(soma)/2.0<<endl;


    return 0;
}

