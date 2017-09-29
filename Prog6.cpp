#include<iostream>
#include<cmath>
using namespace std;
int reverse(int,int,int);
int main()
{int num,a=0,n,result;
	cout<<"Enter A Number : ";
	cin>>num;
	n=num;
	while(n!=0)
	{
	 n/=10;
	 a++;
	}
	a=pow(10,(a-1));
	result=reverse(num,a,0);
	cout<<"The Reverse Of The Given Number Is : "<<endl<<result;
	return 0;
}
int reverse(int num,int a,int k)
{	int s;
	s=(num%10)*(a);
	k+=s;
	if(a!=0)
	{
	 return reverse((num/10),(a/10),k);
	}
	else
	{
		return k;
	}
}
