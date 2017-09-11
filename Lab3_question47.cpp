#include<iostream>
using namespace std;
main() {
	int a,b,c;
	cout<<" enter any numbers ";
	cin>>a;
	for(c=1;c<=a;c++)
	{
		if(a%c==0)
		b++;
		}
		if(b==2)
		cout<<" the number is prime ";
		else
		cout<<" the number is not prime ";
}
