#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int size, arr[100], x, y, temp;

	// Setting of parameters for sorting
	cout << "Selection Sorting..." << endl;
	cout << "Enter the array size: " << endl;
	cin >> size;
	cout << "Enter the "<<size<< " elements"<<endl;

	// Sets the array value
	for (x = 0; x < size; x++)
	{
		cin >> arr[x];
	}
	
	// Displays the elements entered
	cout<<"Your data "<<endl;
	for (x = 0; x < size; x++)

	{
		cout << arr[x]<<" ";
	}
	
	cout<<""<<endl;
	
	// Uses selection sorting on elements
	for (x = 0; x < size; x++)
	{
		for (y = x + 1; y < size; y++)
		{
			if (arr[x]> arr[y])
			{
				temp = arr[x];
				arr[x] = arr[y];
				arr[y] = temp;
			}
		}
	}

	// Elements after sorting in ascending order
	cout << "After using selection sort... \n";
	for (x = 0; x < size; x++)
	{
		cout << arr[x] << " ";
	}
	_getch();
	return 0;
}