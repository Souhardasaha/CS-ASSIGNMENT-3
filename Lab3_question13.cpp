#include<iostream>
using namespace std;
main()
{    float a,b,c;
     cout<<" enter the three angles of the triangle ";
     cin>>a>>b>>c;
     if(a+b+c==180)
       cout<<" the triangle is valid ";
     else
       cout<<" the triangle is not valid ";
}
