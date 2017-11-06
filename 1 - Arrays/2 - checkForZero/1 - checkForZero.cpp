#include <iostream>
#include <unordered_set>

bool checkForZeroSum(int arr[], int n);

int main()
{
	int arr[] = {4, 2, -3, -1, 0, 4};
	int n = sizeof(arr)/sizeof(arr[0]);

	checkForZeroSum(arr, n) ?
	std::cout << "Array exists" << std::endl : 
	std::cout << "Array don't exist" << std::endl;

	return 0;
}

bool checkForZeroSum(int arr[], int n)
{
	// Empty set to store sum of elements of each sub-array
	std::unordered_set<int> set;

	// Insert 0 first
	set.insert(0);

	int sum=0;
	for(int i=0; i<n; i++)
	{
		sum+=arr[i];
		if(set.find(sum)!= set.end())
			return true;
		else
			set.insert(sum);
	}
	return false;
}