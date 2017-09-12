#include<iostream>
using namespace std;
main() {
	int a,b,c,d,e,f,g;
	cout<<" enter any positive integer ";
	cin>>f;
	for(a=1;a<=f;a++)
	{
		g=0;
		b=a;
		while(b!=0)
		{
			e=1;
			c=b%10;
			for(d=1;d<=c;d++)
			{
				e*=d;
				}
				g+=e;
				b/=10;
				}
				if(g==a)
				cout<<a<<" \n ";
				}
}
