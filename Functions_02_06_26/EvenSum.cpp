#include<iostream>
using namespace std;

void evenSum(int n)
{
	int sum = 0;
	
	for(int i=2; i<=n; i=i+2)
	{
		
		sum = sum + i;
		cout<<sum<<endl;
	}
	cout<<"Even sum is : "<<sum; 
}


int main()
{
	
	int n; 
	cout<<"How may even numbers sum you req: ";
	cin>>n;
	
	evenSum(n);
	
	return 0;
}