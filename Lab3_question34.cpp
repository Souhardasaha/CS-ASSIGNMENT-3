#include <iostream>
#include<cmath>
using namespace std;
main() {
	int a,b,c,d;
	cout<<" enter any number: ";
	cin>>a;
	c=a;
	b=0;
	while(c>10)
	{
		c=c/10;
		b++;
	}
	d=a%10;
	a=a-d+c;
	a=(a-c*(pow(10,b)))+d*(pow(10,b));
	cout<<" \nthe number after swapping the first and the last digits of the number is: "<<a;
}
