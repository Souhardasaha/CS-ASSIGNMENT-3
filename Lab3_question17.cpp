#include<iostream>
#include<cmath>
using namespace std;
main() {
       int a,b,c,x,y,d,r,i;
    cout<<" Enter the coefficients a,b,c ";
    cin>>a>>b>>c;
    d=(b*b - 4*a*c);
    if (d>0) 
    {
        x=(-b + sqrt(d))/(2*a);
        y=(-b - sqrt(d)) / (2*a);
        cout<<" the roots are real and different ";
        cout<<" x: "<<x;
        cout<<" y: "<<y;
    }
    else 
    if (d==0)
    {
        cout<<" the roots are real and same ";
        x=(-b + sqrt(d))/(2*a);
        cout<<" x=y= "<<x;
    }
    else
    {
        r=-b/(2*a);
        i=sqrt(-d)/(2*a);
        cout<<" the roots are complex and different ";
        cout<<" x: "<<r<<" + "<<i<<" i ";
        cout<<" y: "<<r<<" + "<<i<<" i ";
    }
     
}
