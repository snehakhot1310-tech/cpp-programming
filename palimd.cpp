#include<iostream>
using namespace std;
int main()
{
  int n,r=0,i;
  cout<<"Enter n:";
  cin>>n;
  i=n;
  while(n!=0)
  {
    r=r*10+n%10;
    n=n/10;
  }
  if(i==r)
    cout<<"Palindrome";
  else
    cout<<"Not Palindrome";
  return 0;
}
