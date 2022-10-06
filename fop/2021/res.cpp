//progrimg to print result
#include<iostream>
#include<string>
using namespace std;
int main()
{
  int m1,m2,m3,m4,m5,per,fristsub,sensub,thdsub,foursub,fivesub,total;
	double enrollnum;
  string s_n1,s_n2,s_n3,s_n4,s_n5,myfullname; 
  cout<<"enter the numer m1:\t";
  cin>>m1;
 cout<<"enter the numer m2: \t";
  cin>>m2;
 cout<<"enter the numer m3: \t";
  cin>>m3;
 cout<<"enter the numer m4: \t";
  cin>>m4;
 cout<<"enter the numer m5: \t";
  cin>>m5;
 cout<<"enter the enrollnum: \t";
  cin>>enrollnum;
 cout<<"enter fristsub code: \t";
 cin>>fristsub;
 cout<<"enter sensub code: \t";
 cin>>sensub;
 cout<<"enter thdsub code: \t";
 cin>>thdsub;
 cout<<"enter foursub code: \t";
 cin>>foursub;
 cout<<"enter fivesub code: \t";
 cin>>fivesub;
 cout<<"enter myfullname: \t";
 cin>>myfullname;
 cout<<"enter s_n1: \t";
 cin>>s_n1;
 cout<<"enter s_n2: \t";
cin>>s_n2;
cout<<"enter s_n3: \t";
cin>>s_n3;
cout<<"enter s_n4: \t";
cin>>s_n4;
cout<<"enter s_n5: \t";
cin>>s_n5;
 total=m1+m2+m3+m4+m5;
 per=(total)*100/500;

if(per>=90 && per<=100)
 cout<<"your gred is a+\n";

 else if(per>=80 && per<=70)
  cout<<"your gred is a\n";


 else if (per>=60 && per<=50)
 cout<<"your gred is b\n";

 else if (per>=40 && per<=33)
 cout<<"your gred is c\n";
 
else 
cout<<"you are faild\n";
return 0;
}


   
	
    

 
 
 
 






 

 

 

 

 
