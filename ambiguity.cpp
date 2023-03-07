#include<iostream>
using namespace std;

class base
{
     public:
     void display()
     {
          cout<<"from base class:"<<endl;
     }
};
class derived: public base
{
     public:
     void display()
     {
          cout<<"from the derived class:"<<endl;
          base::display();    // or we can use this inside the member function of dervived class
     }
};

int main()
{
     derived d;
     d.base::display();   // we use scope resolution operator to remove ambugiuty errors
     d.display();
     return 0;
}