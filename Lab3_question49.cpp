#include<iostream>
using namespace std;
main() {
	int a,b,c;
	cout<<" enter any number ";
	cin>>a;
	for(b=1;b<=a;b++)
	{ 
		if(b%2!=0)
		c+=b;
		}
		cout<<" sum of all prime numbers: "<<c;
}
