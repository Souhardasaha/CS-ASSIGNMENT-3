#include<iostream>
#include<cmath>
using namespace std;
main() {
	long a,b,c,d=0,e=1;
	cout<<" enter a binary number ";
	cin>>a;
	b=a;
	while(b>0)
	{
		c=b%10;
		d=d+c*e;
		e=e*2;
		b=b/10;
		}
		cout<<a<<" \nthe decimal form of "<<a<<" is "<<d;
}
