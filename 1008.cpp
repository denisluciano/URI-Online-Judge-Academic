#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double n,h,s;
    cin>>n>>h>>s;
    
    double x=(h*s);
    
	
	cout<<"NUMBER = "<<n<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<x<<endl;
	
	return 0;
	}