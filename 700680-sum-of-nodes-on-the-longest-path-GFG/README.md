# [Sum of nodes on the longest path](https://www.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1)
## Medium
Given a binary tree root[], you need to find the sum of the nodes on the longest path from the root to any leaf node. If two or more paths have the same length, the path with the maximum sum of node values should be considered.
Examples:
Input: root[] = [4, 2, 5, 7, 1, 2, 3, N, N, 6, N] 
Output: 13
Explanation:
The highlighted nodes (4, 2, 1, 6) above are part of the longest root to leaf path having sum = (4 + 2 + 1 + 6) = 13
Input: root[] = [1, 2, 3, 4, 5, 6, 7]Output: 11Explanation: The longest root-to-leaf path is 1 -&gt; 3 -&gt; 7, with sum 11.
Input: root[] = [10, 5, 15, 3, 7, N, 20, 1]Output: 19Explanation: The longest root-to-leaf path is 10 -&gt; 5 -&gt; 3 -&gt; 1 with a sum of 10 + 5 + 3 + 1 = 19.
Constraints:1 &lt;= number of nodes &lt;= 1060 &lt;= node-&gt;data &lt;= 104