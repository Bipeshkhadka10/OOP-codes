#include<iostream>
using namespace std;

class student
{
     public:
     char x;
     char name[20];
     student()
     {
          cout<<"enter the name of student"<<endl;
          gets(name);
     }
     student(student &r){
        this->name=r.name;
     }

     void getname(){
          cout<<"the student name is "<<name<<endl;
     }

};

int main()
{
     student r1;
     student r2(r1);
     r2.getname();

     return 0;

     
}