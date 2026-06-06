#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>arr{1,2,3,4,5};
	vector<int>brr{5,4,9,8,7};
	
	vector<int>ans;
	
	for(int i = 0; i < arr.size(); i++)
	{
		for(int j = 0; j < brr.size(); j++)
		{
			if(arr[i] == brr[j])
			{
				ans.push_back(arr[i]);
			}
		}
	}
	
	for(auto value: ans)
	{
		cout<<value<<" ";
	}
	
	return 0;
}