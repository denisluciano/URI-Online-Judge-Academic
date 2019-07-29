#include <iostream>
#include<iomanip>
using namespace std;

int main (){
	
	double a,b;
	cin >> a >> b;
	
	double m=(a*3.5 + b*7.5)/11;
	
	cout<<fixed<<setprecision(5) << "MEDIA"<<" = "<< m << endl;
		
	return 0;

}