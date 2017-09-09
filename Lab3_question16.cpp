#include<iostream>
using namespace std;
main()
{    float a,b,c;
     cout<<" enter the three sides of a triangle ";
     cin>>a>>b>>c;
     if(a==b && b==c && a==c)
       cout<<" the triangle is equilateral ";
     else
     if(a==b || b==c || a==c)
       cout<<" the triangle is isoceles ";
     else
       cout << " the trianle is scalene ";
}
