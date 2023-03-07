#include<iostream>
using namespace std;

class student
{
     protected: 
     int roll_no;
     char name[20];
     public:
     void get_data();
     void put_data();
};
void student::get_data()
{
     cout<<"Enter the name and roll_no:"<<endl;
     cin>>name>>roll_no;
}

void student::put_data()
{
      cout<<"name="<<name<<"\t roll_no="<<roll_no<<endl;
}

class test
{
     protected: int sub1, sub2;
     public:
     void get_marks(float ,float);
     void put_mark();

};
void test::get_marks(float x,float y)
{
     sub1=x;
     sub2=y;
}
void test::put_mark()
{
     cout<<"sub1="<<sub1<<"\t sub2"<<sub2<<endl;
}

class remark: public student, public test
{
     protected: float total;
     public:
     void display()
     {
          student::put_data();
          test::put_mark();
          total=sub1+sub2;
          cout<<"total mark="<<total;
     }
};

int main()
{
     remark r;
     r.get_data();
     r.get_marks(47.3,75.2);
     r.display();
     return 0;
}