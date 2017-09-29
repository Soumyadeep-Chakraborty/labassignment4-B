#include <iostream>
using namespace std;

int print(int,int);

int main() 
{int num;
	cout<<"Enter The Upper Limit : ";
	cin>>num;
	cout<<"The Natural Numbers In The Given Interval Are : "<<endl;
	print(num,1);
    return 0;
}
int print(int num,int i){ 
	if(i<=num)
	{
	cout<<i<<endl;
	return print(num,(i+1));
	}
	else 
	{return 0;
	}
}
