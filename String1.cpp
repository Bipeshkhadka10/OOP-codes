// write a program to count the number of letter present in the given string:

// program to count no of letter in the provided string:

#include <iostream>
using namespace std;

class counting
{
private:
     char str[30];
     int count=0;

public:
     void input()
     {
          cout << "enter the string: " << endl;
          gets(str);
     }
     void display()
     {
          for(int i=0; str[i] != '\0'; i++)
          {
           count=i;
          }
          cout<<"The number of letter are: "<< count<<endl;
     }
};

int main()
{
     counting x;
     x.input();
     x.display();
     return 0;
}