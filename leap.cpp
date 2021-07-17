#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"\n Enter the year";
	cin>>year;
	
	
	if(year%4==0)
	cout<<"\n the year is leap";
	
	if(year%4!=0)
	cout<<"\n the year is non leap";
	return 0;
}
