#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double v;
    cin>>v;

    if (v>=0 && v<=2000){
        cout<<"Isento"<<endl;
    }
    else if (v>2000 && v<=3000){
        cout<<fixed<<setprecision(2)<<"R$ "<<    (v-2000)*0.08<<endl;
    }
    else if (v>3000 && v<=4500){
        cout<<fixed<<setprecision(2)<<"R$ "<<80 +(v-3000)*0.18<<endl;
    }
    else if (v>4500){
        cout<<fixed<<setprecision(2)<<"R$ "<<350+(v-4500)*0.28<<endl;
    }
    return 0;
}
