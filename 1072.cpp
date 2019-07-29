#include <iostream>

using namespace std;

int main()
{
    int n;
        cin>>n;
    int *vet;
    vet=new int [n];

    for(int i=0;i<n;i++)
    {
        cin>>vet[i];
    }

    int aux=0; int aux2=0;
    for(int i=0; i<n; i++)
    {
        if(vet[i]>=10 && vet[i]<=20)
            aux++;
        else
            aux2++;
    }

    cout<<aux<<" in"<<endl;
    cout<<aux2<<" out"<<endl;

    return 0;
}
