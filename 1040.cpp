#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;


    double media = (a*2.0+b*3.0+c*4.0+d)/10;

    if (media>=7.0){
        cout<<fixed<<setprecision(1)<<"Media: "<<media<<endl;
        cout<<"Aluno aprovado."<<endl;
    }
    if(media <5.0){
        cout<<fixed<<setprecision(1)<<"Media: "<<media<<endl;
        cout<<"Aluno reprovado."<<endl;
    }
    if (media >=5.0 && media <7.0){
        cout<<fixed<<setprecision(1)<<"Media: "<<media<<endl;
        cout<<"Aluno em exame."<<endl;
        double nn;
        cin>>nn;
        cout<<fixed<<setprecision(1)<<"Nota do exame: "<<nn<<endl;

        if ((media +nn)/2>=5.0){
            cout<<"Aluno aprovado."<<endl;
            cout<<fixed<<setprecision(1)<<"Media final: "<<(media+nn)/2<<endl;
        }
        else{
            cout<<"Aluno reprovado."<<endl;
            cout<<fixed<<setprecision(1)<<"Media final: "<<(media+nn)/2<<endl;
    }}



    return 0;
}
