#include<iostream>
using namespace std;
class complex
{
private:
   int real_1,imag_1;
   int real_2,imag_2;
   int add_real,add_imag;
   int sub_real,sub_imag;
public:
   void input()
   {
      cout<<"first Complex Number:";
      cin>>real_1>>imag_1;
      cout<<"Second Complex Number:";
      cin>>real_2>>imag_2;
    }
    void add()
    {
       add_real=real_1+real_2;
       add_imag=imag_1+imag_2;
    }
    void sub()
    {
       sub_real=real_1-real_2;
       sub_imag=imag_1-imag_2;
    }
    void display()
    {
       cout<<"Addition="<<add_real;
       if(add_imag>=0)
          cout<<"+"<<add_imag<<"i";
       else
          cout<<"-"<<-add_imag<<"i";
       cout<<"\nSubstraction="<<sub_real;
       if(sub_imag>=0)
          cout<<"+"<<sub_imag<<"i";
       else
          cout<<"-"<<-sub_imag<<"i";
       }
};
int main()
{
   complex c;
   c.input();
   c.add();
   c.sub();
   c.display();
   
   return 0;
}
   
