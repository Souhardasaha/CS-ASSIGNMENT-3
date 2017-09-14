#include<iostream>
using namespace std;
main() {
	long a,b,c,d,e=0,f=0,g=1,h=1;
	cout<<" enter a binary number ";
	cin>>a;
	b=a;
	while(b>0)
	{
		c=b%10;
		f=f+c*g;
	            g=g*2;
		b=b/10;
		}
		while(f>0)
		{
			d=f%16;
			e=e+d*h;
			h=h*10;
			f=f/16;
			}
			if(e>=10&e<=15)
			{
				switch(e)
				{
					case 10: cout<<a<<" \nA ";
					break;
					case 11: cout<<a<<" \nB ";
					break;
					case 12: cout<<a<<" \nC ";
					break;
					case 13: cout<<a<<" \nD ";
					break;
					case 14: cout<<a<<" \nE ";
					break;
					case 15: cout<<a<<" \nF ";
					}
					}
					else
					cout<<e;
}
