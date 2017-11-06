Question 1: Find Pair with given sum in the array

Given: An unsorted array of integers, find a pair with given sum in it

Goal- solving plan:
   Use map to solve in linear time.
   1: insert each element of the array arr[i] in map.
   2: check if difference (arr[i], sumArr[i]) exist in map.
   3: If difference is seen: print pair.
   
   Target:
      Time complex: O(n)
   Space:
      Space complex: O(n)

Ex:
	Input:
		arr = [8,7,2,5,3,1]
		sum = 10
	Output:
		Pair found at index 0 and 2 (8+2)
		or
		Pair found at index 1 and 4 (7+3)


Result:
   The time complexity for 2 - findPair.c and 2 - findPair.java is both O(n)
   The space complexity for both is O(n).


Analysis:
	Time complexity is reduced with the extra usage of space.
