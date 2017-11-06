class printSubarr
{
	public static void printAllSubArr(int arr[])
	{
		int n = arr.length;
		for (int i=0; i<n; i++)
		{
			int sum =0;
			for (int j=i; j<n; j++)
			{
				sum+=arr[j];
				if(sum==0)
					System.out.println("Subarray [" + i + ".." + j + "]");
			}
		}
	}
	public static void main(String args[])
	{
		int arr[] = {3,4,-7,3,1,3,1,-4,-2,-2};
		printAllSubArr(arr);
	}
}