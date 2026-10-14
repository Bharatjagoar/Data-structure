# [Merge k Sorted Arrays](https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1)
## Medium
Given a 2D matrix mat[][] of size n x m. Each row in the matrix is sorted in non-decreasing order, merge all the rows and return a single sorted array that contains all the elements of the matrix.
Examples : 
Input: mat[][] = [[1, 3, 5, 7], [2, 4, 6, 8], [0, 9, 10, 11]]Output: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
Explanation: Merging all elements from the 3 sorted arrays and sorting them results in: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11].
Input: mat[][] = [[1, 2, 3, 4], [2, 2, 3, 4], [5, 5, 6, 6], [7, 8, 9, 9]]Output: [1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9, 9] 
Explanation: Merging all elements from the 4 sorted arrays and sorting them results in:[1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9, 9]
Constraints:1 ≤ n * m ≤ 1050 ≤ mat[i][j] ≤ 106