// DMA for an object array

// Program :  W.A.P to count the votes and take the deatils of the citizens:

#include<iostream>
using namespace std;

class election
{
     private:
     static int count;
     long int citizen_no;
     char name[20],address[20];
     public:
     void input()
     {
          cout<<"Enter the personal details of voter: "<<endl;
          cin>>name>>address>>citizen_no;
          count ++;

     }

     void display()
     {
          cout<<"the name is: "<<name<<endl;
          cout<<"address: "<<address<<endl;
          cout<<"Citizen_No: "<<citizen_no<<endl;
     }
     static void total_records()
     {
          cout<<"the total records found:"<<count<<endl;
     }
};
election::count=0;



int main()
{
     char ch;
     int i,n;
     election *ptr;
     cout<<"How many record to enter: ";
     cin>>n;
     ptr = new election[n];
     for (i=0;i<n;i++)
     ptr[i]->input();
     election::total_records();
     delete [] ptr;
     return 0;

}


