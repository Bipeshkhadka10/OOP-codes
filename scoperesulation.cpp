#include<iostream>
using namespace std;

class students
{
private:
     char name[20];
     int roll_no;
     char gender[];
public:
     void getname()
     {
          cout<<"enter the personal details of student:"<<endl;
          gets(name);
          cin>>roll_no;
     }
     void getgender();
     
     void display(){
          cout<<"Student_name:"<<name<<"\n"<<"ROll No:"<<roll_no<<"\n"<<"Gender:"<<gender<<endl;
          
     }
};
 void students::getgender()
 {
     cout<<"gender:"<<endl;
     gets(gender);
}

int main()
{
     students s1;
     s1.getname();
     s1.getgender();
     s1.display();
     return 0;
}

