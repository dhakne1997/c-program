# include<iostream>

using namespace std;

int main ()

{
	
	int i,n,sum=0,a,b,c;
	
	cout<<"\n enter the range:";
	cin>>n;
	
	a =0;
	b =1;
	sum =a+b;
	
	cout<<"\n"<<a<<b;
	
	for(i=2;i<=n-2;i++)
	
	{
		c=a+b;
		cout<<c;
		
		
		sum =sum+c;
		
		a =b;
		b =c;
		
		
	}
	
	cout<<"\n sum of range "<<sum;
	
}