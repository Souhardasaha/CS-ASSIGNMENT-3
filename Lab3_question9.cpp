#include<iostream>
using namespace std;
main()
{    char a;
     cout<<" enter any character ";
     cin>>a;
     if((a>=97) && (a<=122))
       cout<<" the character is an alphabet ";
     else
     if((a>=49) && (a<=57))
       cout<<" the character is a digit ";
     else
       cout<<" the character is a special character ";
}
