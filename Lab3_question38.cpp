#include <iostream>
using namespace std;
main() {
	int a,b,c;
	cout<<" enter any number ";
	cin>>a;
	b=a;
	while(b!=0)
	{
		c=(c*10)+(b%10);
		b/=10;
	}
	if(c==a)
	cout<<" the number is a palindrome ";
	else
	cout<<" the number is not a palindrome ";
}
