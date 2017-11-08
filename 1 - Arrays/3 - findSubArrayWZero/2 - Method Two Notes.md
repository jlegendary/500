# Question 3: Print subarray with 0 sum: Method Two

## Given: 
	An unsorted array of integers, print subarrays with 0 sum in it.
## Output: 
	Any subarray values with 0 sum 

### Solving plan:
   - [x] Step 1: Use unordered map to print all subarrays with 0 sum.
   - [x] Step 2: If subarray sum is equal to 0, print it.

### Target:
      Time complex: O(n^3)
### Space:
      Space complex: O(n)

### Ex:
	Input:
		arr = [8,7,2,5,3,1]
		sum = 10
	Output:
      sub array with 0 sums:
      {-3,-1,0,4}
      {0}
