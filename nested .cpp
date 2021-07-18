#include<iostream>

using namespace std;

int main()
{
int i,j;
char ch='*';
for(i=1;i<=10;i++)
{
for(j=1;j<=i;j++)
{
cout<<ch;
}
cout<<"\n\n";
}
return 0;	
}