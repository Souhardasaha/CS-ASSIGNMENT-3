#include<iostream>
using namespace std;
main()
{    float a,b,c;
     cout<<" enter the three sides of a triangle ";
     cin>>a>>b>>c;
     if(a<b+c && b<a+c && c<a+b)
       cout<<" the triangle is valid ";
     else
       cout<<" the triangle is not valid ";
}
