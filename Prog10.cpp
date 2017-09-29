#include<iostream>
using namespace std;
int fibnum(int);
int main()
{
	int num,result;
	cout<<"Enter A Number : ";
	cin>>num;
	result=fibnum(num);
	cout<<"The Fibonacci Number Of The User Input Term Is : "<<endl<<result;
	return 0;
	
}
int fibnum(int num)
{
	if(num==1||num==2)
	{
		return 1;
	}
	else
	{
		return (fibnum(num-1)+fibnum(num-2));
	}
}
