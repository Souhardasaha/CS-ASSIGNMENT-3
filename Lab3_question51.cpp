#include<iostream>
using namespace std;
main() {
	int a,b,c,d=0;
	cout<<" enter any positive  integer ";
	cin>>a;
	c=a;
	while(c!=0)
	{
		b=c%10;
		d+=b*b*b;
		c/=10;
		}
		if(d==a)
		cout<<a<<" \nthis is an armstrong number";
		else
		cout<<a<<" \nthis is not an armstrong number";
}
