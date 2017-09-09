#include <iostream>
using namespace std;
main() {
	float a,b,c,d,e,f;
	cout<<" enter the marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer ";
	cin>>a>>b>>c>>d>>e;
	f=(a+b+c+d+e)/5;
	if(f>=90)
	{
	cout<<" Grade A "<<f;
	}
	else
	if(f>=80 && f<90)
	{
	cout<<" Grade B "<<f;
	}
	else
	if(f>=70 && f<80)
	{
	cout<<" Grade C "<<f;
	}
	else
	if(f>=60 && f<70)
	{
	cout<<" Grade D "<<f;
	}
	else
	if(f>=40% && f<60)
	{
	cout<<" Grade E "<<f;
	}
	else
	cout<<" Grade F "<<f;
}
