#include <iostream>
using namespace std;
main() {
	int a,b,c=0;
	cout<<" enter any number ";
	cin>>a;
	while(a!=0)
	{
		c=(c*10)+(a%10);
		a/=10;
		}
		while(c!=0)
		{
			switch(c%10)
			{
				case 1: cout<<" one ";
				break;
				case 2: cout<<" two ";
				break;
				case 3: cout<<" three ";
				break;
				case 4: cout<<" four ";
				break;
				case 5: cout<<" five ";
				break;
				case 6: cout<<" six ";
				break;
				case 7: cout<<" seven ";
				break;
				case 8: cout<<" eight ";
				break;
				case 9: cout<<" nine ";
				break;
				case 0: cout<<" zero ";
				}
				c=c/10;
				}
}
