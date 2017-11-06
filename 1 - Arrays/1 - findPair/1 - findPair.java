1 - findPair.java

class FindPair
{
	public static void findPair(int arr[], int sum)
	{
		int n = arr.length;

		for (int i=0; i<n-1; i++)
		{
			for (int j=i+1; j<n; j++)
			{
				if (arr[i] + arr[j] == sum)
				{
					System.out.println("Pair found at index" + i + " and " + j);
				}
			}
		}
	}	
}



