// a program for the area of a rectangle box, cylinder and a traingle using the concept of 
// function overloading

#include<iostream>
#include<math.h>
using namespace std;

float area(int a,int b)
{
    return(a*b);
}
float area(float r,int h)
{
    return(3.14*2*r*h);
}
float area(float x,float y)
{
    return(0.5*x*y);
}

int main()
{
    int c,d,q;
    float p,e,f;

    cout<<"enter the measures of respective solids:";
    cin>>c>>d>>e>>f>>p>>q;

    cout<<"\nThe area of rectangular box:"<<area(c,d);
    cout<<"\nThe area of cylinder:"<<area(p,q);
    cout<<"\nThe area of traingle :"<<area(e,f);
    return 0;

}
