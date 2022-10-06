
//program to calculate Basic Salary,Gross Salary,Net Salary
#include <iostream>
using namespace std;
int main()
{
	int BS=0,GS=0,NS=0,ma,da,pf,tax,hra;
	cout<<"Enter BS \n";
	cin>> BS;

	cout<<"Enter ma \n";
	cin>>ma;
	ma = BS * ma/100;

	cout<<"Enter hra \n";
	cin>>hra;
	hra = BS*hra/100;

	cout<<"Enter da \n";
	cin>>da;
	da = BS*da/100;

	cout<<"Enter tax \n";
	cin>>tax;
	tax = BS*tax/100;

	cout<<"Enter pf \n";
	cin>>pf;
	pf = BS*pf/100;

	GS = BS+ma+hra+da;
	cout<<"\n \t Your Gross Salary Is "<<GS;
	
	NS = GS - pf - tax;
	cout<<"\n \t Your Net Salary Is "<<NS;

	return 0;
}
