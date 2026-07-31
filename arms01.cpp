#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,r,sum=0,i;
  cout<<"Enter n:";
  cin>>n;
  i=n;
  while(n!=0)
  {
    r=n%10;
    sum=sum+pow(r,3);
    n=n/10;
  }
  if(i==sum)
    cout<<" Amstrong ";
  else
    cout<<"Not Amstrong ";
  return 0;
}
