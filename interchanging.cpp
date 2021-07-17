#include<iostream>
using namespace std;
int main()
{
    int C, D, T;
     cout<<"Enter the value of C: ";
     cin>>C;

     cout<<"Enter the value of D: ";
     cin>>D;

     C = C+D; 
     D = C-D;
     C = C-D; 


     cout<<"\n The value of C: "<<C;
     cout<<"\n The value of D: "<<D;
     
}