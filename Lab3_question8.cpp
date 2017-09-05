#include<iostream>
using namespace std;
main()
{    char a;
     cout<<" enter any alphabet ";
     cin>>a;
     if((a==97) || (a==101) || (a==105) || (a==111) || (a==117))
       cout<<" the alphabet is a vowel ";
     else
        cout<<" the alphabet is a consonant ";
}
