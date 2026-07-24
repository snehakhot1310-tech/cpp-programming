#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter two no. :"<<endl;
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"After Swapping :"<<endl;
cout<<"First num a:"<<a<<endl;
cout<<"second num b:"<<b;
return 0;
}
