#include<iostream>
using namespace std;
main() {
	int a,b,c,d,e,f=0;
	cout<<" enter any positive integer ";
	cin>>a;
	b=a;
	while(b!=0)
	{
		e=1;
		c=b%10;
		for(d=1;d<=c;d++)
		{
			e*=d;
			}
			f+=e;
			b/=10;
			}
			if(f==a)
			cout<<a<<" \nthis is a strong number";
			else
			cout<<a<<" \nthis is not a strong number ";
}
