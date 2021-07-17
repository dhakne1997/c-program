#include<iostream>
using namespace std;
int main()
{
	int km,m,cm,mm;
	
	cout<<"\n Enter the distance in km";
	cin>>km;
	
	m=km*1000;
	cm=m*100;
	mm=cm*10;
	
	cout<<"\n distance in meter"<<m;
	cout<<"\n distance in centimeter"<<cm;
    cout<<"\n distance in milimeter"<<mm;	
    return 0;

}
