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


    for(int i=0; i<n; i++)
    {
        if(vet[i]==0)
        {
            cout<<"NULL"<<endl;
            continue;
        }
        if(vet[i]%2==0)
        {
            if(vet[i]<0)
                cout<<"EVEN NEGATIVE"<<endl;
            if(vet[i]>0)
                cout<<"EVEN POSITIVE"<<endl;
        }
        else
        {
            if(vet[i]<0)
                cout<<"ODD NEGATIVE"<<endl;
            if(vet[i]>0)
                cout<<"ODD POSITIVE"<<endl;
        }

    }


    return 0;
}

