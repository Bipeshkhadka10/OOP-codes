// DMA for a single object

#include<iostream>

class complex
{
    float real, img;
    public:
    complex():real(0), img(0){}
    complex(float r, float i):real(r), img(i){}
    void display()
    {
        cout<<real<<"\t"<<img;
    }
    
};

int main()
{
    int i, n;
    complex *ptr;
    ptr = new complex(5.5,6.4);
    prt-> display();
    delete ptr;
    return 0; 
}