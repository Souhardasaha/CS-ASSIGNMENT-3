#include <iostream>
using namespace std;
main() {
	int a,b=0;
	cout<<" enter any number ";
	cin>>a;
	while(a!=0)
	{
		b=(b*10)+(a%10);
		a/=10;
			}
			cout<<" reverse of the number: "<<b;
}
