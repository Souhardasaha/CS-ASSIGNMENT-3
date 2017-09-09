#include <iostream>
using namespace std;
main() {
	float a,b,hra,da;
	cout<<" enter the basic salary of an employee ";
	cin>>a;
	if(a<= 10000)
	{
	hra=0.2;
	da=0.8;
	b=a+hra*a+da*a;
	cout<<" HRA = 20%, DA = 80% ";
	cout<<" the gross salary is: "<<b;
	}
	else
	if(a<= 20000)
	{
	hra=0.25;
	da=0.9;
	b=a+hra*a+da*a;
	cout<<" HRA = 25%, DA = 90% ";
	cout<<" the gross salary is: "<<b;
	}
	else
	{
	hra=0.3;
	da=0.95;
	b=a+hra*a+da*a;
	cout<<" HRA = 30%, DA = 95% ";
	cout<<" the gross salary is: "<<b;
	}
}
