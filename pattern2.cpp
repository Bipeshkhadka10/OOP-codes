#include <iostream>
using namespace std;

// patern problems :
// half pyramid

int main()
{
     int n;
     cout<<"Enter the no of rows :"<<endl;
     cin>>n;
     for (n ; n>=1;n--)
     {
          for(int j=1;j<=n;j++)
          {
               cout<<"*";
          }
          cout<<endl;
     }

}