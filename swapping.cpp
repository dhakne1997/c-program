#include<iostream>
using namespace std;
int main()
{
	int a,b,t;
	cout<<"\n Enter the numbers";
	cin>> a>>b;
	cout<<"\n before swapping  is ="<<a<<b;

	t=a;
	a=b;
	b=t;
	
	cout<<"\n after the swapping is ="<<a<<b;
	return 0;
}

