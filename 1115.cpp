#include <iostream>

using namespace std;

int main ()
{
    int x=1,y=3;

    while(x !=0 && y != 0)
    {
        cin>>x>>y;
        if(y > 0 && x>0)
            cout<<"primeiro"<<endl;
        if(y > 0 && x <0)
            cout<<"segundo"<<endl;
        if(y < 0 && x <0)
            cout<<"terceiro"<<endl;
        if(y < 0 && x >0)
            cout<<"quarto"<<endl;
    }



    return 0;
}

