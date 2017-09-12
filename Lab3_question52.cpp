#include<iostream>
using namespace std;
main() {
	int a,b,c,d,e;
	cout<<" enter any positive integer ";
	cin>>d;
	for(a=1;a<=d;a++)
	{
		e=0;
		b=a;
		while(b!=0)
		{
			c=b%10;
			e+=c*c*c;
			b/=10;
			}
			if(e==a)
			cout<<e<<" \n ";
			}
}
