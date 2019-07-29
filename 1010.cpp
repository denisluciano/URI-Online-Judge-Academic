#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int cod_peca1, n_peca1, cod_peca2, n_peca2;
    double valor_uni1, valor_uni2;

    cin>>cod_peca1>>n_peca1>>valor_uni1;
    cin>>cod_peca2>>n_peca2>>valor_uni2;

    double valor_pagar = n_peca1 * valor_uni1 + n_peca2 * valor_uni2;

    cout<<"VALOR A PAGAR: R$ ";
    cout<<fixed<<setprecision(2)<<valor_pagar<<endl;

    return 0;
}
