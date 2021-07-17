#include<iostream>
using namespace std;
int main()
{
	float l,b,r,ca,cc,rp,ra;
	
	cout<<"Enter the length:";
	cin>>l;
	
	cout<<"Enter the breadth:";
	cin>>b;
	
	cout<<"Enter the radius of circle:";
	cin>>r;
	
	ra =l*b;
	rp =2 *(l*b);
	ca = 3.14 *r*r;
	cc =2 * 3.14*r;
	
	
	cout<<"\n area of rectangle"<<ra;
	cout<<"\n parimeter of rectangle"<<rp;

	cout<<"\n area of circle"<<ca;

	cout<<"\n circumference of circle"<<cc;

}
