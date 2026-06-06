#include<iostream>
#include<vector>

using namespace std;

int main()
{

	// vector<int>arr;	
	
	// arr.push_back(1);
	// arr.push_back(2);
	// arr.push_back(3);
	
	
	// cout<<arr.size()<<endl;
	
	// for(int i=0; i<arr.size(); i++)
	// {
	// 	cout<<arr[i]<<" ";
	// }
		
	
	vector<int>brr(10,-100);
	
	for(int i=0; i<brr.size(); i++)
	{
		cout<<brr[i]<<" ";
	}
	
	cout<<endl;
	
	cout<<"brr is empty or not : "<<brr.empty();
	
	return 0;
}