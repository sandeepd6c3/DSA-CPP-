#include<iostream>
using namespace std;

int reverseInteger()
{
	
	int n = 12345;
	
	int reverse = 0;
	
	while(n>0)
	{
		int lastDig = n%10;
		reverse = reverse*10+lastDig;
		n = n/10;
	}
	return reverse;
}

int main()
{
	
	cout<<reverseInteger();
	
	return 0;
}