#include<iostream>
using namespace std;
main()
{    int a;
     cout<<" enter month number ";
     cin>>a;
     if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
       cout<<" the number of days in the month is 31 ";
     else
     if(a==2)
       cout<<" the number of days in the month is 28 and if it is a leap year the number of days in the month is 29 ";
     else
     if(a==4 || a==6 || a==9 || a==11)
       cout<<" the number of days in the month is 30 ";
     else
       cout<<" invalid month number ";
}
