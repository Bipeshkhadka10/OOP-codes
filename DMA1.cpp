// Dynamic memories allocations for a single object and object array
// -DMA for a object is a similar process of a fundamental datatype.
// we use of new and delete operator for creating and deleting the object dynamically
// some of the steps:-
// 1. first create a pointer of same classtype(class_name *ptr_variable;)
// 2. use new operator for creating the memory for nameless operato dynamically(ptr_variable = new class_name;)
// 3. delete operator is use for deleting the object pointer of the memory allocations

// program:
#include<iostream>
using namespace std;
class complex
{
private:
     float real,img;
public:
     complex():real(0),img(0){}

     complex(float r,float i):real(r),img(i){}
     void display()
     {
          cout<<"real no: "<<real<<"\t"<<"imaginary no: "<<img<<endl;
     }
};

int main()
{
     int a,b;
     complex *prt;
     prt = new complex(5.5,6.4);
     prt->display();
     delete prt;
}