#include<iostream>
using namespace std;
class student
{
private:
string name;
int rollnumber;
float marks;
public:
void input ()
{
cout<<"Enter student Name:";
cin>>name;
cout<<"Enter Marks:";
cin>>marks;
cout<<"Enter roll number:";
cin>>rollnumber;
}
void display()
{
cout<<"\n---Student Information---"<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Roll Number:"<<rollnumber<<endl;
cout<<"Marks:"<<marks<<endl;
}
};
int main()
{
student stu1;
stu1.input();
stu1.display();
}


