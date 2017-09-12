#include<iostream>
using namespace std;
main() {
	int a,b,c=0,d=0,e=1;
	cout<<" enter any positive number ";
	cin>>a;
	for(b=1;b<=a;b++)
	{
		if(b==1)
		{
			cout<<d<<" \n ";
			continue;
			}
			if(b==2)
			{
				cout<<e<<" \n ";
				continue;
				}
				c=d+e;
				d=e;
				e=c;
				cout<<c<<" \n ";
				}
}
