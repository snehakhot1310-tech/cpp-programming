#include<iostream>
using namespace std;
class Result
{
private:
   int marks;
public:
   void accept()
   {
      cout<<"Enter Marks:";
      cin>>marks;
   }
   void displayResult()
   {
      if(marks>=35)
      {
         cout<<"Result:Pass"<<endl;
      }
      else
      {
         cout<<"Result:Fail"<<endl;
      }
   }
};
int main()
{
   Result r;
   r.accept();
   r.displayResult();
   return 0;
}
