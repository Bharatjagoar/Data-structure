# [K-th Largest Sum Contiguous Subarray](https://www.geeksforgeeks.org/problems/k-th-largest-sum-contiguous-subarray/1)
## Medium
Given an array arr[] of size n, find the sum of the K-th largest sum among all contiguous subarrays. In other words, identify the K-th largest sum from all possible subarrays and return it.
Examples:
Input: arr[] = [3, 2, 1], k = 2 
Output: 5
Explanation: The different subarray sums we can get from the array are = [6, 5, 3, 2, 1]. Where 5 is the 2nd largest.
Input: arr[] = [2, 6, 4, 1], k = 3
Output: 11
Explanation: The different subarray sums we can get from the arrayare = [13, 12, 11, 10, 8, 6, 5, 4, 2, 1]. Where 11 is the 3rd largest.
Constraints:1 &lt;= arr.size() &lt;= 10001 &lt;= k &lt;=&nbsp;(n*(n+1))/2-105 &lt;= arr[i] &lt;=&nbsp;105