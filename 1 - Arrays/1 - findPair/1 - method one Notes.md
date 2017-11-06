Question 1: Find Pair with given sum in the array

Given: An unsorted array of integers, find a pair with given sum in it

Solving plan:
   By analyzing every integer in array to find the correct sum.
   
   Target:
      Time complex: O(n^2)
   Space:
      Space complex: O(1)

Ex:
	Input:
		arr = [8,7,2,5,3,1]
		sum = 10
	Output:
		Pair found at index 0 and 2 (8+2)
		or
		Pair found at index 1 and 4 (7+3)

The time complexity for 1 - findPair.c and 1 - findPair.java is both O(n^2)
The space complexity for both is O(1).
