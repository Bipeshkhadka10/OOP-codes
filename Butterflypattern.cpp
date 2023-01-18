#include<iostream>
using namespace std;
// pattern programs:
// Butterfly pattern

int main()
{
     int i,j,n;
     
     cout<<"enter the rows: ";
     cin>>n;
     for (i=1;i<=n;i++)
     {
          for(j=1;j<=i;j++)
          {
               cout<<"*";
          }
          int space=2*n-2*i;
          for(j=1;j<=space;j++)
          {
               cout<<" ";
          }
           for(j=1;j<=i;j++)
          {
               cout<<"*";
          }
          cout<<endl;

     }

     for (i=n;i>=1;i--)
     {
          for(j=1;j<=i;j++)
          {
               cout<<"*";
          }
          int space=2*n-2*i;
          for(j=1;j<=space;j++)
          {
               cout<<" ";
          }
           for(j=1;j<=i;j++)
          {
               cout<<"*";
          }
          cout<<endl;
          
     }

}