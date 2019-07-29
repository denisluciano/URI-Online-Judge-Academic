#include <iostream>

using namespace std;

int main ()
{

    //int b =7;

    for(double i=0;i<=2;i+=0.2)
    {
        for(int j=1;j<4;j++)
        {
            cout<<"I="<<i<<" J="<<j+i<<endl;
           // b--;
        }
        //b+=5;
    }

    return 0;
}
