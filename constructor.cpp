#include<iostream>
using namespace std;

class traingle
{
     private:
     int base;
     int height;
     public:
     traingle(int b, int h)
     {
          this->base=b;
          this->height=h;
     } 
     traingle(int h){
          this->base=0;
          this->height=h;
     }
     traingle()
     {
          this->base =10;
          this->height=39;
     }

     void getarea()
     {
          cout<<"the area of triangle is:"<<0.5*this->height*this->base<<endl;
     }

};

int main()
{
     traingle t1;
     t1.getarea();
     traingle t2(20);
     t2.getarea();
     traingle t3(30,40);
     t3.getarea();
     
     return 0;
}