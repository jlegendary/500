// Notes link: http://www.geeksforgeeks.org/c-qsort-vs-c-sort/
//   Will use cpp for STL's sort, rather than C's qsort.


#include <stdio.h>
#include <stdlib.h>

void findPair(int arr[], int n, int sum);

int main()
{
	int arr[] = {8,7,2,5,3,1};
	int sum = 10;

	int n = sizeof(arr)/sizeof(arr[0]);

	findPair(arr, n, sum);

	return 0;
}

void findPair(int arr[], int n, int sum)
{
	std::sort(arr, arr+n);
	int low = 0;
	int high = n-1;

	while (low<high)
	{
		if (arr[low] + arr[high] == sum)
		{
			std::cout << "Pair found" << endl;
		}
		(arr[low] + arr[high] < sum)? low++: high--;
	}

	std::cout << "Pair not found" << endl;
}