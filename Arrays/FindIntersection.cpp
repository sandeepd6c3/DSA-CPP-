#include<iostream>
#include<vector>
using namespace std;

int main()
{
	    vector<int> arr{1,2,2,3};
    vector<int> brr{2,2,4};
	
	vector<int>ans;
	
	for(int i = 0; i < arr.size(); i++)
	{
		for(int j = 0; j < brr.size(); j++)
		{
			if(arr[i] == brr[j])
			{
				
				ans.push_back(arr[i]);
				 brr[j] = -1;   // mark used
                break;
			}
		}
	}
	
	for(auto value: ans)
	{
		cout<<value<<" ";
	}
	
	return 0;
}