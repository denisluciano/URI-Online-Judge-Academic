#include <iostream>

using namespace std;

int main ()
{
    int vet [100];

    for(int i=0;i<100; i++)
        cin>>vet[i];

    int aux=vet[0];
    int aux2;

    for(int i=0; i<100;i++)
    {
        if(vet[i]>aux)
        {
            aux=vet[i];
            aux2=i+1;
        }
    }
    cout<<aux<<endl;
    cout<<aux2<<endl;



    return 0;
}
