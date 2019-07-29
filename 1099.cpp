#include <iostream>

using namespace std;

int main ()
{

    int n ;
    int x,y;
    int soma;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        soma=0;
        cin>>x>>y;
        for(int i=1+min(x,y); i<max(x,y);i++)
        {
            if(i%2!=0)
            {
                soma+=i;
            }
        }
        cout<<soma<<endl;

    }



    return 0;
}
