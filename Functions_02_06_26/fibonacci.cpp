#include<iostream>
using namespace std;

int main()
{
	int n = 10;
	int first=0;
	int second=1;
	int fib;
	
	cout<<first<<" "<<second<<" ";
	for(int i=2; i<n; i++)
	{
		fib = first+second ;
		
		cout<<fib<<" ";
		
		first = second;
		second = fib;
	}
	return 0;
}