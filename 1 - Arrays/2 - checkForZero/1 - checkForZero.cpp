#include <iostream>
#include <unordered_set>

bool checkForZeroSum(int arr[], int n);

int main()
{
	int arr[] = {4, 2, -3, -1, 0, 4};
	int n = sizeof(arr)/sizeof(arr[0]);

	checkForZeroSum(arr, n) : 
	std::cout << "Arry exists" << arr[n] << std::endl : 
	std::cout << "Array don't exist" << std::endl;
}

bool checkForZeroSum(int arr[], int n)
{
	
}