#include <iostream>
using namespace std;

int power(int,int);

int main() 
{int base,exponent,result;
   cout<<"Enter Base : ";
   cin>>base;
   cout<<"Enter Exponent : ";
   cin>>exponent;
   result=power(base,exponent);
   cout<<"The Required Number Is : "<<result;
    return 0;
}
int power(int base,int exponent){ 
	if(exponent==1){return base;
	}
	if(base==1){return 1;
	}
	else{return (base*power(base,(exponent-1)));
	}
}
