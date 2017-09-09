#include<iostream>
using namespace std;
main() {
	int a,b,c;
	cout<<" enter any number: ";
	cin>>a;
	b=a;
	while(b!=0)
	{
		c=c+(b%10);
		b=b/10;
		
	}
	cout<<" sum of the digits: "<<c;
}
