#include<iostream>
using namespace std;
int main()
{
    int d1,d2,d3,d4,d5,sum,num;
   
    cout<<"Enter a five digit number: ";
    cin>>num;
    d1=(num*10);
    d2=(num*100)/10;
    d3=(num*1000)/100;
    d4=(num*10000)/1000;
    d5=(num/1000);
    sum=d1+d2+d3+d4+d5;
    cout<<"\n The sum of the digis is:"<<sum;

    return 0;
}