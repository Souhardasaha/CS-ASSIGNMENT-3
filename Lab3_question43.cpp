#include<iostream>
using namespace std;
main() {
	int a,b;
	cout<<" enter any number ";
	cin>>a;
	for(b=1;b<=a;b++)
	{
		if(a%b==0)
		cout<<b<<" \n ";
	}
}
