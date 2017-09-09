#include<iostream>
using namespace std;
main() {
	int a,b,c;
	cout<<" enter any number ";
	cin>>a;
	b=a;
	c=1;
	while(b!=0)
	{
		c=c*(b%10);
		b=b/10;
	}
	cout<<" \nproduct of the digits: "<<c;
}
