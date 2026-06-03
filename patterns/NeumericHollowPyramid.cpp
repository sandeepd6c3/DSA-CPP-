#include<iostream>
using namespace std;

int main()
{
	
	int n=10;
	
	
	for(int i=1; i<=n; i++)
	{
		for(int j=i; j<=n; j++)
		{
			if(j == i || j == n || i == 1)
			{
				cout<<j;
			}
			else
			{
				cout<<" ";
			}
		}
		
		cout<<endl;
	}
	
	return 0;
}
















// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n = 5;

// 	// Loop through each row of the pyramid.
// 	for (int i = 0; i < n; i++)
// 	{
// 		// Print leading spaces to align the pyramid.
// 		for (int j = 0; j < n - i - 1; j++)
// 		{
// 			cout << " ";
// 		}

// 		// Print numbers and inner spaces for the current row.
// 		int start = 1;
// 		for (int j = 0; j < 2 * i + 1; j++)
// 		{
// 			// First and last rows contain all numbers with spaces between them.
// 			if (i == 0 || i == n - 1)
// 			{
// 				if (j % 2 == 0)
// 				{
// 					cout << start;
// 					start++;
// 				}
// 				else
// 				{
// 					cout << " ";
// 				}
// 			}
// 			else
// 			{
// 				// Middle rows only print boundary numbers to keep the pyramid hollow.
// 				if (j == 0)
// 				{
// 					cout << 1;
// 				}
// 				else if (j == 2 * i)
// 				{
// 					cout << i + 1;
// 				}
// 				else
// 				{
// 					cout << " ";
// 				}
// 			}
// 		}

// 		cout << endl;
// 	}

// 	return 0;
// }
