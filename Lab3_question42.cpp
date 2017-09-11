#include<iostream>
using namespace std;
main() {
	int a,b,c,d=1;
	cout<<" enter the base and exponential ";
	cin>>a>>b;
	for(c=0;c<b;c++)
	{
		d=d*a;
		}
		cout<<" \n "<<a<<" raised to the power "<<b<<" is "<<d;
}
