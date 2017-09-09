#include <iostream>
using namespace std;
main() {
	int a,b;
	cout<<" enter a number ";
	cin>>a;
	while(a!=0)
	{
		a=a/10;
		++b;
		
	}
	cout<<" the number of digits in the number is: "<<b;
}
