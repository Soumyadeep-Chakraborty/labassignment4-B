#include <iostream>
using namespace std;
int print (int,int);
int main() 
{int num2,num1;
 char exp;
	cout<<"Enter The Lower Limit : ";
	cin>>num1;
	cout<<"Enter The Upper Limit : ";
	cin>>num2;
	cout<<"Choose To Print Odd Or Even, Enter 'o' for odd and 'e' for Even : ";
	cin>>exp;
	cout<<"The Required Numbers Are : "<<endl;
	
	if(exp=='e')
	{
		if ((num1%2)==0)
		{
			print(num2,num1);
		}
		else
		{
		 print(num2,(num1+1));
		}
	}
	
	else if(exp=='o')
	
	{ if((num1%2)==0)
		{
		print(num2,(num1+1));
		}
	  else
	   {print(num2,num1);
	   }
	}
    return 0;
}
int print(int num2,int num1){ 
	if(num1<=num2)
	{
	cout<<num1<<endl;
	return print(num2,(num1+2));
	}
	else 
	{return 0;
	}
}
