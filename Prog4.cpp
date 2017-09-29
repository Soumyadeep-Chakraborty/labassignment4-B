#include <iostream>
using namespace std;

int sum(int,int,int);
int main() 
{int num,s;
	cout<<"Enter The Number : ";
	cin>>num;
	s=sum(num,1,0);
	cout<<"The Required Sum Is : "<<s;
    return 0;
}
int sum(int num,int i,int k){ 
	if(i<=num)
	{k+=i;
	
	return sum(num,(i+1),k);
	}
	else 
	{return k;
	}
}
