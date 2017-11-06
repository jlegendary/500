#include <stdio.h>

void findPair(int arr[], int n, int sum);

int main()
{
	int arr[] = {8,7,2,5,3,1};
	int sum = 10;

	int n = sizeof(arr)/sizeof(arr[0]);

	findPair(arr, n, sum);

	return 0;
}