#include <iostream>


using namespace std;

int main ()
    {
        int vet[5];

        for(int i=0; i<5;i++)
        {
            cin>>vet[i];
        }

        int aux=0;
        int aux2=0;
        int aux3=0;
        int aux4=0;


        for(int i=0; i<5; i++)
        {
            if(vet[i]%2==0)
            {
                aux++;
            }
            else
                aux2++;
            if(vet[i]>0)
                aux3++;
            if(vet[i]<0)
                aux4++;
        }
        cout<<aux<<" valor(es) par(es)"<<endl;
        cout<<aux2<<" valor(es) impar(es)"<<endl;
        cout<<aux3<<" valor(es) positivo(s)"<<endl;
        cout<<aux4<<" valor(es) negativo(s)"<<endl;


        return 0;
    }


