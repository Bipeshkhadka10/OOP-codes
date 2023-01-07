#include<iostream>
using namespace std;

int main()
{    int rows, i, j;
     cout<<"enter the no of rows:"<<endl;
     cin>>rows;
     for ( i = 0; i < rows; i++)
     {
          for ( j = 0; j<i; j++)
          {
               cout<<"*";

          }
          cout<<"\n";
          
     }
     
     return 0;

}