#include<iostream>
using namespace std;

class rectangle
{
     int length;
     int breath;
     public:
     void getlength(int l)
     {
          if (l<0){
               cout<<"length can't be negative"<<endl;
               exit(0);
          }else
          {
         this->length=l;
          }
     }
     void getbreath(int b)
     {
           if (b<0){
               cout<<"breath can't be negative"<<endl;
          }else{
          this->breath=b;
          }
     }
     void getarea()
     {
          cout<<"the area of a rectangle is :"<<this->length*this->breath;

     }
};


int main()
{
     rectangle r;
     r.getlength(-2);
     r.getbreath(56);
     r.getarea();
     return 0;
}