#include<iostream>
using namespace std;
main() {
	int a,b,c,d;
	cout<<" enter any positive integer ";
	cin>>a;
	for(b=1;b<a;b++)
	{
		d=0;
		for(c=1;c<b;c++)
		{
			if(b%c==0)
			d+=c;
			}
			if(d==b)
			cout<<b<<" \n ";
			}
}
