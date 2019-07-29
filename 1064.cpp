#include <iostream>
#include <iomanip>

using namespace std;

int main ()
    {
        double vet[6];

        for(int i=0; i<6;i++)
        {
            cin>>vet[i];
        }

        int aux=0;
        double aux2=0;

        for(int i=0; i<6; i++)
        {
            if(vet[i]>0)
            {
                aux++;
                aux2+=vet[i];
            }
        }
        cout<<aux<<" valores positivos"<<endl;
        
        cout<<fixed<<setprecision(1)<<aux2/aux<<endl;





        return 0;
    }
