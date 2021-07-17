#include<iostream>
using namespace std;
int main()
{
    int bs, da, hr, gs;
    cout<<"Enter Basic Salary: ";
    cin>>bs;

    da = 0.4 * bs;
   hr = 0.2 * bs;

    gs = bs + da + hr;

    cout<<"\n bs: "<<bs;
    cout<<"\n da:"<<da;
    cout<<"\n hr: "<<hr;
    cout<<"\n gs: "<<gs;

    return (0);
}