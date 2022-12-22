#include<iostream>
#include<conio.h>

class StudentRecord
{
private: 
 char name[20];
 int roll;
 float marks;

    
public:
 int age;
 void input()
 
  {
   
    //cout<<"Enter the name, roll, marks, age";
    cin>>name>>roll>>marks>>age;
	}
 
 void display()
  {
    cout<<name<<roll<<marks<<age;
  	}
};                 

int main()
{
    StudentRecord a,b,c;
    a.input();
    a.display();
    b.input();
    b.display();
    return 0;

}
