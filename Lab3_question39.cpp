#include <iostream>
using namespace std;
main() {
int a,b,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c0=0;
cout<<" enter any number ";
cin>>a;
while(a>0)
{
b=a%10;
a=a/10;
switch(b)
{
case 1: c1++;
break;
case 2: c2++;
break;
case 3: c3++;
break;
case 4: c4++;
break;
case 5: c5++;
break;
case 6: c6++;
break;
case 7: c7++;
break;
case 8: c8++;
break;
case 9: c9++;
break;
case 0: c0++;
}
}
cout<<" number of zeros: "<<c0<<" \nnumber of one's: "<<c1<<" \nnumber of two's: "<<c2<<" \nnumber of three's: "<<c3<<" \nnumber of four's: "<<c4<<" \nnumber of five's: "<<c5<<" \nnumber of six's: "<<c6<<" \nnumber of seven's: "<<c7<<" \nnumber of eights: "<<c8<<" \nnumber of nine's: "<<c9;
}
