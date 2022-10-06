//programing this volume,area,serphes 
#include<iostream>
using namespace std;
int main()
{
  float csa=0,tsa=0,values=0,pi=3.14,r,h,l;
 cout<<"enter number r";
 cin>>r;
cout<<"enter number h";
 cin>>h;
cout<<"enter number l";
 cin>>l;
 values=pi*r*r+h/3;
 csa=pi*r+l;
 tsa=pi+r*(l+r);
cout<<"add is "<<values;
cout<<"add is "<<csa;
cout<<"add is "<<tsa;
return 0;
}
