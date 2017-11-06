// Native approach
//  Consider every pair in given array and return those index, if desired sum is found.

#include <stdio.h>

void findPair(int arr[], int n, int sum);

int main ()
{
   int arr[] = {8,7,2,5,3,1};
   int sum = 10;
   // divisor of sizeof(arr[0] is the size of the zeroth element of the array
   // Source: https://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c
   int n = sizeof(arr)/sizeof(arr[0]);
   
   findPair(arr, n, sum);
   return 0;
}

void findPair(int arr[], int n, int sum)
{
   for (int i=0; i<n-1; i++)
   {
      for (int j=i+1; j<n; j++)
      {
         if (arr[i]+arr[j]==sum)
         {
            printf("Pair found at index %d and %d", i, j);
            printf("\n");
         }
      }
   }
}

