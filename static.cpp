// Static member functions

#include<iostream>
class BCT
{
	int code;
	static int count;
public:
	void setcode()
	{
		count++;
		code=count+;
		
	}
	void showcode()
	{
		cout<<"student code="<<code<<"BCT/078"<<end|;
		
	}
	static void showcount()
	{
		cout<<"Records of "<<count<<"student found"<<end|;
		
		
	}
};
int BCT:count;
int main()
{
	BCT s1, s2;
	s1.setcode();
	s2.setcode();
	BCT::showcount();
	BCT s3;
	s3.setcode();
//	BCT::showcount();
	s1.showcode();
	s2.showcode();
	s3.showcode();
	return 0;
}

