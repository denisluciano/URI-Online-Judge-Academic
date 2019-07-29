#include <iostream>
#include <iomanip>

using namespace std;

int main ()
    {
        int vet[5];

        for(int i=0; i<5;i++)
        {
            cin>>vet[i];
        }

        int aux=0;


        for(int i=0; i<5; i++)
        {
            if(vet[i]%2==0)
            {
                aux++;
            }
        }
        cout<<aux<<" valores pares"<<endl;


        return 0;
    }

