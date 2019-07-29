#include <iostream>

using namespace std;

int main ()
{
    int x=1,y=3;
    int soma;


    while(x != y)
    {
        cin>>x>>y;
        if(x > y)
            cout<<"Decrescente"<<endl;
        if(y > x)
            cout<<"Crescente"<<endl;
    }



    return 0;
}

