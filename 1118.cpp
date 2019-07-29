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

            }
            else
            {
                soma+=x;
                cout<<fixed<<setprecision(2)<<"media = "<<(soma)/2.0<<endl;
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
                int aux1;
                cin>>aux1;
                while(aux1!=1 && aux1!=2)
                {
                    if(aux1 < 1 || aux1 > 2)
                    {
                    cout<<"novo calculo (1-sim 2-nao)"<<endl;
                    cin>>aux1;
                    }
                }
                    if(aux1==2)
                        break;
                    if(aux1==1)
                    {
                        i=0;
                        soma=0;
                        //continue;
                    }

            }
        }
        else
            cout<<"nota invalida"<<endl;

    }





    return 0;
}

