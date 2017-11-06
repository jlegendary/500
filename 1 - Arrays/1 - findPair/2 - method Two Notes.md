Question 1: Find Pair with given sum in the array

Given: An unsorted array of integers, find a pair with given sum in it

Goal- solving plan:
   Sort first, then loop until low is less than high, and compare sum
   
   Target:
      Time complex: O(n log n)
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


Result:
   The time complexity for 2 - findPair.c and 2 - findPair.java is both O(n log n)
   The space complexity for both is O(1).
