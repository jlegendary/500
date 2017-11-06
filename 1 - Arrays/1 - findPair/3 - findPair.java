import java.util.HashMap;
import java.util.Map;

class FindPair
{
	public static void findPair(int arr[], int sum)
	{
		Map<Integer, Integer> map = new HashMap<Integer, Integer>();
		for (int i=0; i<arr.length; i++)
		{
			if(map.containsKey(sum-arr[i]))
			{
				System.out.println("Pair found at index " + map.get(sum-arr[i]) + " and " + i);
			}
			map.put(arr[i], i);
		}
		System.out.println("Pair not found");
	}
	public static void main (Static[] args)
	{
		int arr[] = {8,7,2,5,3,1};
		int sum = 10;
		findPair(arr, sum);
	}
}