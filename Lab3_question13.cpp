#include <iostream>
using namespace std;
main() {
	int a,b,c,d,e,f,g,h,i;
	cout<<" enter amount ";
	cin>>a;
	if(a>=5)
	{
		b=a/2000;a=a%2000;
		c=a/500;a=a%500;
		d=a/200;a=a%200;
		e=a/100;a=a%100;
		f=a/50;a=a%50;
		g=a/20;a=a%20;
		h=a/10;a=a%10;
		i=a/5;
		cout<<" 2000: "<<b<<" \n500: "<<c<<" \n200: "<<d<<" \n100: "<<e<<" \n50: "<<f<<" \n20: "<<g<<" \n10: "<<h<<" \n5: "<<i;
		cout<<" \ndenominations of the remaining amount is not available ";
	}
	else
	cout<<" denominations of this is not available ";
}
