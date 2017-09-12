#include<iostream>
using namespace std;
main() {
	int a,b,c=0;
	cout<<" enter any positive integer ";
	cin>>a;
	for(b=1;b<a;b++)
	{
		if(a%b==0)
		c+=b;
		}
		if(c==a)
		cout<<a<<" \nthe number is a perfect number ";
		else
		cout<<a<<" \nthe number is not a perfect number ";
}
