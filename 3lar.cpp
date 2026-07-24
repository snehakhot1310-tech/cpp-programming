#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter three numbers : "<<endl;
cin>>a>>b>>c;
if(a>=b&&a>=c)
  cout<<a<<" "<<"is the largest";
else if(b>=a&&a>=c)
  cout<<b<<" "<<"is the largest";
else
  cout<<c<<" "<<"is the largest";
return 0;
}
