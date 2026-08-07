#include<iostream>
using namespace std;
class Greatest
{
private:
   int num1,num2;
public:
   void accept()
   {
      cout<<"Enter First Number:";
      cin>>num1;
      cout<<"Enter Second Number:";
      cin>>num2;
   }
   void findGreatest()
   {
      if(num1>num2)
      {
         cout<<"Greatest Number="<<num1<<endl;
      }
      else if(num2>num1)
      {
         cout<<"Greatest Number="<<num2<<endl;
      }
      else
      {
         cout<<"Both numbers are equal."<<endl;
      }
  }
};
int main()
{
   Greatest g;
   g.accept();
   g.findGreatest();
   return 0;
}
