#include<iostream>
using namespace std;
// pattern programs:

int main()
{
     int i,j,n;
     cout<<"enter the rows:";
     cin>>n;
     for(i=1;i<=n;i++)
     {
          for (j=1;j<=i;j++)
          {
               cout<<i;
          }
          cout<<endl;
     }
}