#include<iostream>
#include<climits>
using namespace std;

int main()
{
	
	int arr[] = {3,4,2,7,5,8,10};
	int n = sizeof(arr)/sizeof(int);
	int mini = INT_MAX;
	
	
	for(int i=0; i<n; i++)
	{
		if(mini>arr[i])
		{
			mini = arr[i];
		}
	}
	
	cout<<"Mini in this array is : "<<mini;
	
	return 0;
}