#include <iostream>
using namespace std;
main() {
	int a,b,c;
	cout<<" enter a ";
	cin>>a;
	b=0,c=0;
	while(b<=a)
	{
		if(b%2==0)
		c=c+b;
		b+=1;
	}
		cout<<c;
}
