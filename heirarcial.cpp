#include<iostream>
using namespace std;

class base
{
     protected: int x,y;
     public:
     void assign()
     {
          x=53;
          y=243;
     }
};

class add:public base
{
     int s;
     public:
     void su()
     {
        s=x+y;  
     }
};

class sub:public base
{
     int z;
     public:
     void zu()
     {
        z=x-y;  
     }
};

class mult:public base
{
     int m;
     public:
     void mu()
     {
        m=x*y;  
     }
};

int main()
{
     add a;
     sub i;
     mult o;
     a.assign();
     a.su();
     i.assign();
     i.zu();
     o.assign();
     o.mu();
     return 0;
}

