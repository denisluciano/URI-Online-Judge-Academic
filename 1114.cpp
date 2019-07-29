#include <iostream>

using namespace std;

int main ()
{
    int x=1;

    while(x !=2002)
    {
        cin>>x;
        if(x==2002)
            break;
        cout<<"Senha Invalida"<<endl;

    }
    cout<<"Acesso Permitido"<<endl;


    return 0;
}

