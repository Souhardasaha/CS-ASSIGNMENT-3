#include<iostream>
using namespace std;
main() {
	int a,b,c;
	cout<<" enter two numbers ";
	cin>>a>>b;
	c=(a>b)?a:b;
	while(c>0)
	{
		if(c%a==0&c%b==0)
		{
			cout<<" LCM: "<<c;
			break;
			}
			else
			c++;
			}
}
