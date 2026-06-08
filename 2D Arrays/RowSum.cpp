#include<iostream>
using namespace std;

// Function to compute and print the sum of each row in a 3x3 matrix.
void RowSum(int arr[3][3], int rows, int cols)
{
	for(int i = 0; i < rows; i++)
	{
		int sum = 0; // Reset sum for the current row.
		for(int j = 0; j < cols; j++)
		{
			sum += arr[i][j]; // Add each element in the row.
		}
		cout << "Sum of row " << i << " = " << sum << endl;
	}
}

int main()
{
	int arr[3][3];

	// Read values into the 3x3 array from standard input.
	cout << "Enter Numbers :" << endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	// Print the matrix to verify input.
	cout << "Matrix:" << endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Call function to print the sum of each row.
	RowSum(arr, 3, 3);
	return 0;
}