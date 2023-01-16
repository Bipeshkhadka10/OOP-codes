
// constant member functions 

#include<iostream>
#include<math.h>
using namespace std;

class mathematics
{
     int r,i;
     public:
     void get_data()
     {
          cout<<"enter real and imaginary parts:"<<endl;
          cin>>r>>i;

     }
     void magnitude () const;
};
 void mathematics::magnitude() const
 {
     float mag;
     mag=sqrt(pow(r,2)+pow(i,2));
     cout<<"the magnitude is : "<<mag<<endl;

 };

 int main()
 {
     mathematics s;
     s.get_data();
     s.magnitude();
     return 0;
     
 }