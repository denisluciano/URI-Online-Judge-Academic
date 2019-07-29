#include <iostream>

using namespace std;

int main ()
    {
        int a;
        int aux=0;
        cin>>a;
        int i=0;
        while(i<6)
        {
            if((a+aux)%2==0){}
            else
            {
                i++;
                cout<<a+aux<<endl;

            }
            aux++;

        }

        return 0;
    }


