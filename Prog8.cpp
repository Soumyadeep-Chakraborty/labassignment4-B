#include<iostream>
using namespace std;
int sum (int,int);
int main()
{int num,result;
	cout<<"Enter A Number : ";
	cin>>num;
	result=sum(num,0);
	cout<<"The Sum Of The Digits Of The Given Number Is : "<<endl<<result;
	return 0;
}
int sum(int num,int k)
{   k+=(num%10);
	if(num!=0)
	{
	 return sum((num/10),k);
	}
	else
	{
		return k;
	}
}
