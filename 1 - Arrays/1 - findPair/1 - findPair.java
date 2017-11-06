1 - findPair.java

class FindPair
{
	public static void findPair(int arr[], int sum)
	{
		// Length of array
		int n = arr.length;
		// All element except last
		for (int i=0; i<n-1; i++)
		{
			// Start i-th until end
			for (int j=i+1; j<n; j++)
			{
				// If sum is found
				if (arr[i] + arr[j] == sum)
				{
					System.out.println("Pair found at index" + i + " and " + j + "\n");
				}
			}
		}
		// No pairs
		System.out.println("Pair not found");
	}	

}



