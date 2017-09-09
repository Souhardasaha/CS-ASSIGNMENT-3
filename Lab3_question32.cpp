#include<iostream>
using namespace std;
main() {
	int a,b;
	cout<<" enter a number: ";
	cin>>a;
	b=a;
	while(b>10)
	{
		b=b/10;
		
	}
	cout<<" first digit: "<<b<<" \nLast digit: "<<a%10;
}
