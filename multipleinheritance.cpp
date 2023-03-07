#include<iostream>
using namespace std;

class one
{
     protected: int x=7;
     public:
     void display1()
     {
          cout<<x;
     }
};
class two
{
     protected: int y=5;
     public:
     void display2()
     {
          cout<<y;
     }
};

class three: public one, public two
{
     int z;
     public:
     void display3()
     {
          z=x+y;
          cout<<"z="<<z;
     }
};

int main()
{
     three obj;
     obj.display1();
     obj.display2();
     obj.display3();
     return 0;
}
