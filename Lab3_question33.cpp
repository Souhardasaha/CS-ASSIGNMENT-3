#include<iostream>
using namespace std;
main() {
	int a,b,c,d;
	cout<<" enter a number: ";
	cin>>a;
	b=a;
	while(b>10)
	{
		b=b/10;
		c=a%10;
		d=b+c;
		
	}
	cout<<" first digit: "<<b<<" \nlast digit: "<<c<<" \nsum of these: "<<d;
}
