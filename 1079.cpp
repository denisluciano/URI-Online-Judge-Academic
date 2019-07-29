#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    double **mat;
    mat=new double *[n];

    for(int i=0; i<n; i++)
        mat[i]=new double [3];

    for (int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>mat[i][j];
        }
    }

    double aux=0;

    for (int i=0; i<n; i++)
    {
        aux=0;
        for(int j=0; j<3; j++)
        {
            if(j==0)
                aux+=mat[i][j] * 2;
            if(j==1)
                aux+=mat[i][j] * 3;
            if(j==2)
                aux+=mat[i][j] * 5;
        }
        cout<<fixed<<setprecision(1)<<aux/10<<endl;
    }


    return 0;
}
