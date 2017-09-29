#include<iostream>
using namespace std;
int factorial(int);
int main()
{
	int num,result;
	cout<<"Enter A Number : ";
	cin>>num;
	result=factorial(num);
	cout<<"The Factorial Of The Given Number Is : "<<endl<<result;
	return 0;
	
}
int factorial(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return (num*factorial(num-1));
	}
}
