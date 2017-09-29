#include <iostream>
using namespace std;

int print(int,int,int);
int main() 
{int num1,num2,sum;
 char exp;
	cout<<"Enter The Lower Limit : ";
	cin>>num1;
	cout<<"Enter The Upper Limit : ";
	cin>>num2;
	cout<<"Choose To Print Sum Of Odd Or Even Number ,Enter 'o' for Odd And 'e' for Even : ";
	cin>>exp;
	
	if(exp=='e')
	{
		if ((num1%2)==0)
		{
		sum=print(num2,num1,0);
		}
		else
		{
		 sum=print(num2,(num1+1),0);
		}
	}
	
	else if(exp=='o')
	
	{ if((num1%2)==0)
		{
		sum=print(num2,(num1+1),0);
		}
	  else
	   {
	    sum=print(num2,num1,0);
	   }
	}
	cout<<"The Required Sum Is : "<<endl<<sum;
    return 0;
}
int print(int num2,int num1,int k){ 
	if(num1<=num2)
	{
	k+=num1;
	return print(num2,(num1+2),k);
	}
	else 
	{return k;
	}
}
