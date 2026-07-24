#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"Enter a year : "<<endl;
cin>>year;
if(year%4==0)
  cout<<year<<"Leap year";
else
  cout<<year<<"Not a leap year";
return 0;
}
