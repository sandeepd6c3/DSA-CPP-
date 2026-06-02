#include<iostream>
using namespace std;

void Max(int a, int b, int c)
{
	if(a>=b)
	{
		cout<<"a is grater !";
	}
	else if (b>=c)
	{
		cout<<"b is grater !";
	}
	else
	{
		cout<<"c is grater !";
	}
	
}

int main()
{
	
	Max(-2,2,-3);
	
	return 0;
}