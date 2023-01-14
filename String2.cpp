// write a progarm to check the no of vowels in the given letter:

// program of counting the vowels in provided word or a string:

#include<iostream>
using namespace std;

class vowels
{
private:
     char str[30];
     int count=0;
public:
     void input()
     {
          cout<<"Enter the string whose vowels letter is to be count: "<<endl;
          gets(str);
     }   
     void know_count()
     {
          for(int i=0; str[i] != '\0'; i++)
          {
               if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||
               str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
               {
                    count++;
               }
               
          }
          cout<<"The Number of vowels in given string is: "<<count<<endl;
     }
};

int main()
{
     vowels letter;
     cout<<"its a simple program using the knowledge of c language:"<<endl;
     letter.input();
     letter.know_count();
}