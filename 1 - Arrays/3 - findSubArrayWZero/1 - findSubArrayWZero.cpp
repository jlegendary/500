#include <iostream>

void printSubArr(int arr[], int n);

int main()
{
	int arr[] = {3,4,-7,3,1,3,1,-4,-2,-2};
	int n = sizeof(arr)/sizeof(arr[0]);
	printSubArr(arr, n);
	return 0;
}

void printSubArr(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		int sum=0;
		for(int j=0; j<n;j++)
		{
			sum+=arr[j];
			if(sum==0)
				std::cout << "Subarray [" << i << ".." << j << "]\n";
		}
	}	
}