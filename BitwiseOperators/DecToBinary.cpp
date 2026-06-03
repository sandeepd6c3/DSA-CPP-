// #include<iostream>
// using namespace std;

// void DecToBin(int n)
// {
// 	while(n>0)
// 	{
// 		int bit = n%2;
// 		cout<<bit<<" ";
// 		n = n/2;
// 	}
// }

// int main()
// {
// 	int n;
// 	cout<<"N is : ";
// 	cin>>n;
	
// 	DecToBin(n);
	
// 	return 0;
// }


#include<iostream>
using namespace std;

void DecToBin(int n)
{
	
	DecToBin(n/2);
	cout<<n%2<<" ";
}

int main()
{
	int n=4;
	
	
	if(n == 0)
	{
		return 0;
	}
	else
	{
		DecToBin(n);
	}
	return 0;
}