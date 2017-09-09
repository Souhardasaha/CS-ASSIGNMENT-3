#include <iostream>
using namespace std;
main() {
	int a,b,c;
	cout<<" enter a "<< "\n";
	cin>>a;
	b=1,c=0;
	while(b<=10)
	{
		c=a*b;
		cout<<a<<" * "<<b<<" = "<<c<<" \n ";
		b+=1;
	}
}
