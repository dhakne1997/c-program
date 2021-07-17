#include<iostream>
using namespace std;
int main()
{
	int amount;
	cout<<"Please input amount for withdraw : ";
	cin>>amount;

	
	cout<<"\n\nRequired notes of Rs. 100  :  "<<(amount / 100);
	cout<<"\n\nRequired notes of Rs. 50   :  "<<((amount % 100) / 50);
	cout<<"\n\nRequired notes of Rs. 10   : "<<(((amount % 100) % 50) / 10);
	cout<<"\n\nAmount still remaining Rs. :  "<<(((amount % 100) % 50) % 10);
	return 0;
}