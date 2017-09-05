#include<iostream>
using namespace std;
main()
{    char a;
     cout<<" enter a character ";
     cin>>a;
     if((a>=65 && a<=90) || (a>=97 && a<=122))
       cout<<" the character is an alphabet ";
     else
        cout<<" the character is not an alphabet ";
}
