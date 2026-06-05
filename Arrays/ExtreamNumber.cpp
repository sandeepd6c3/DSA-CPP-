#include<iostream>
using namespace std;

int main()
{
	int arr[11] = {1,2,3,4,5,6,7,8,9,0,11};
	int n=11;
	int st = 0;
	int end = n-1;
	
	while(st <= end)
	{
		cout<<arr[st]<<" "<<arr[end]<<" ";
		st++;
		end--;
	}
	return 0;
}