#include <iostream>
using namespace std;
main() {
	float a,b,c,d;
	cout<<" enter the CP and SP ";
	cin>>a>>b;
	if(a<b)
	{
	c=b-a;
	cout<<" there is a profit of: "<<c;
	}
	else
	if(a>b)
	{
	d=a-b;
	cout<<" there is a loss of: "<<d;
	}
	else
	cout<<" there is neither profit nor loss ";
}
