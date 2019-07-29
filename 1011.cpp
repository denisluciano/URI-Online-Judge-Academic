#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{

double r, pi, v;

cin>>r;
pi = 3.14159;

v = (4.0/3.0)*pi*(r*r*r);

cout<<"VOLUME = ";
cout<<fixed<<setprecision(3)<<v<<endl;


    return 0;
}
