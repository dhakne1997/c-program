#include<iostream>
using namespace std;

int main( )
{
int qty, dis = 0 ;
float rate, tot ;
cout<< "Enter quantity and rate ";
cin>>qty>>rate;
if ( qty > 1000 )
dis = 10 ;
tot = ( qty * rate ) - ( qty * rate * dis / 100 ) ;
cout<<"Total expenses = Rs."<<tot;
}