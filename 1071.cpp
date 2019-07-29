#include <iostream>

using namespace std;

int main ()
    {
        int a;
        int b;
        cin>>a>>b;

        int aux=0;

        for(int i=b+1; i<a;i++)
        {
            if(i%2==0){}

            else{
                aux+=i;

            }

        }
        cout<<aux<<endl;

        return 0;
    }


