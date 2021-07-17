#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n Enter the number";
	cin>>a>>b>>c;
	if(a>b && a>c)
	cout<<"\n the largest number a="<<a;
	if(b>c && b>a)
	cout<<"\n the largest number b="<<b;
	if(c>a && c>b)
	cout<<"\n the largest number c="<<c;
	return 0;
	 
}
