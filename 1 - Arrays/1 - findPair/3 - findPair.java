import java.util.Arrays;

class FindPair
{
	public static void findPair(int arr[], int sum)
	{
		Arrays.sort(arr);

		int low=0;
		int high = arr.length-1;

		while (low<high)
		{
			if (arr[low] + arr[high] == sum)
			{
				System.out.println("Pair found: " + arr[low] + " and " + arr[high]);
			}
			if (arr[low] + arr[high] < sum)
				low++;
			else
				high--;
		}
		System.out.println("Pair not found");
	}
	public static void main (Static[] args)
	{
		int arr[] = {8,7,2,5,3,1};
		int sum = 0;
		findPair(arr, sum);
	}
}