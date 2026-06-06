#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr)
{
	int ans = 0;
	for(int i=0; i<arr.size(); i++)
	{
		ans = ans^arr[i];
	}
	return ans;
}


int main()
{
	
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	
	vector<int>arr(n);
	
	cout<<"Enter the elements  in array :";
	for(int i=0; i<arr.size(); i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	
	int uniqueElement = findUnique(arr);
	
	cout<<"Unique Element is :"<<uniqueElement;
	
	return 0;
}