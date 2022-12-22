//W.A.P to add two times given in hours and minutes using 
//passing object to function by values.

#include<iostream>
using namespace std;
class time
{
	int hours, minutes;
	public:
		void gettime(int h,int m)
		{hours=h	; minutes=m	};
		void display time()
		{
			cout<<"hours and"<<"minutes"<<hours<<minute;
			
		}
		void sum(time,time);
		
};
void time::sum(time t1,time t2 )
{
	minute=t1.minutes+t2.minutes;
	hours=minutes/60;
	minutes=minutes%60;
	hours=hours + t1.minutes + t2.minutes;
}
int main()
{
	time t1, t2, t3;
	t1.gettime(2,50);
	t2.gettime(3,55);
	t3.sum(t1,t2);
	cout<<"t1=";
	t1.display();
	cout<<"t2=";
	t2.display();
	cout<<"t3=";
	t3.display();
	return 0;
}
