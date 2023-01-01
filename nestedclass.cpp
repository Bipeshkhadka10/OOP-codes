// a program for a example of nested  class 

#include<iostream>
using namespace std;

class student
{
     int roll;
     char name[20];
     public:
     void enter()
     {
          cout<<"Enter the name:"<<endl;
          gets(name);
     }
     void display()
     {
          cout<<"Enter the roll no:"<<endl;
          cin>>roll;
     }
     class date
     {
          int day,month,year;
         public:
          void getdate();
          void showdate();
     };

};

void student::date::getdate()
{
     cout<<"Enter the day,month and years"<<endl;
     cin>>day>>month>>year;
}
void student::date::showdate()
{
     cout<<"the date in formate of day,month,year is:"<<day<<"\t"<<month<<"\t"<<year<<"\t"<<endl;
}

int main()
{
     student x;
     student::date d;
     x.enter();
     d.getdate();
     x.display();
     d.showdate();
     return 0;
    

}