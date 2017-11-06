import java.util.Set;
import java.util.HashSet;

class zeroSumArray
{
	public static Boolean checkForZeroSum(int arr[])
	{
		// Create empty set to store sum of elements
		Set<Integer> set = new HashSet<Integer>();

		set.add(0);
		int sum=0;
		for (int i=0; i<arr.length; i++)
		{
			sum+=arr[i];
			if (set.contains(sum)) 
				return true;
			set.add(sum);
		}
		return false;
	}

	public static void main(String arg[])
	{
		int arr[] = {4,-6,3,-1,4,2,7};
		if (checkForZeroSum(arr))
			System.out.println("Sub array exist");
		else
			System.out.println("Sub array does not exist");
	}
}