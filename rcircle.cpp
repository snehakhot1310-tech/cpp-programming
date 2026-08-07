#include<iostream>
using namespace std;
class Circle
{
private:
   float radius;
public:
   void accept()
   {
      cout<<"Enter Radius:";
      cin>>radius;
   }
   void calculate()
   {
      float area,circumference;
      area=3.14*radius*radius;
      circumference=2*3.14*radius;
      cout<<"\nArea of Circle="<<area<<endl;
      cout<<"Circumference of Circle="<<circumference<<endl;
   }
};
int main()
{
   Circle c;
   c.accept();
   c.calculate();
   return 0;
}
