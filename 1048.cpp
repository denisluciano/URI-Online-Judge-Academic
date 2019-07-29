#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double v;
    cin>>v;

    if (v>=0 && v<=400){
        double ns = v*1.15; double rj=ns-v ;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<rj<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    if (v>=400.01 && v<=800){
        double ns = v*1.12; double rj=ns-v ;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<rj<<endl;
        cout<<"Em percentual: 12 %"<<endl;

    }
    if (v>=800.01 && v<=1200){
        double ns = v*1.10; double rj=ns-v ;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<rj<<endl;
        cout<<"Em percentual: 10 %"<<endl;

    }
    if (v>=1200.01 && v<=2000){
        double ns = v*1.07; double rj=ns-v ;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<rj<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    if (v>2000){
    double ns = v*1.04; double rj=ns-v ;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<ns<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<rj<<endl;
        cout<<"Em percentual: 4 %"<<endl;
        }



    return 0;
}