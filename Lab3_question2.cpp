#include<iostream>
using namespace std;
main()
{     int a,b,c,max;
      cout<<" enter 1st number ";
      cin>>a;
      cout<<" enter 2nd number ";
      cin>>b;
      cout<<" enter 3rd number ";
      cin>>c;
      if(a>=b and a>=c)
        max=a;
      if(b>=a and b>=c)
        max=b;
      else
          max=c;
      cout<<" maximum: "<<max;
}
