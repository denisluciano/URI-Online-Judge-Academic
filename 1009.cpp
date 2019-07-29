#include <iostream>
#include<iomanip>
#include <stdio.h>
using namespace std;
int main ()
{
    char n[100];             //n :nome
    double vt,sf; //sf :salario fixo , vt: vendas total


    cin>>n;
    cin>>sf>>vt;

   double c = 0.15*vt; // c comissão nas vendas totais
   double t = sf +c;

   cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<t<<endl;


    return 0;
}
