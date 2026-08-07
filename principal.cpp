#include<iostream>
using namespace std;
class Interest
{
private:
   float principal,rate,time;
public:
   void accept()
   {
      cout<<"Enter Principal Amount:";
      cin>>principal;
      cout<<"Enter Rate of Interest:";
      cin>>rate;
      cout<<"Enter Time(in years):";
      cin>>time;
   }
   void calculate()
   {
      float simpleInterest;
      simpleInterest=(principal*rate*time)/100;
      cout<<"\nSimple Interest="<<simpleInterest<<endl;
    }
};
int main()
{
   Interest i;
   i.accept();
   i.calculate();
   return 0;
}
