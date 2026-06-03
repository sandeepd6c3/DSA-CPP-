#include<iostream>
using namespace std;

void facto(int n)
{
	int facto = 1;
	
	for(int i=1; i<=n; i++)
	{
		facto = facto*i;
	}
	cout<<facto << " ";
}


int main()
{
	int n;
	cout<<"which number Factorial do you need ? : ";
	cin>>n;
	
	facto(n);
	return 0;
}