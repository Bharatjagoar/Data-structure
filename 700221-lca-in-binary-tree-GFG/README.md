# [LCA in Binary Tree](https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1)
## Medium
Given the root of a binary tree with all unique values and two nodes value,&nbsp;n1 and n2. Find the&nbsp;lowest common ancestor of the given two nodes. Both node values are always present in the Binary Tree.
Note:&nbsp;LCA is the first common ancestor of both the nodes n1 and n2 from bottom of tree.
Examples:
Input: root = [1, 2, 3, 4, 5, 6, 7], n1 = 4, n2 = 5&nbsp; &nbsp; 
Output: 2
Explanation: LCA of 4 and 5 is 2.
Input: root = [1, 2, 3, 4, 5, 6, 7, N, N, N, N, 8], n1 = 7, n2 = 8
Output: 3
Explanation: LCA of 7 and 8 is 3. 
Constraints:1 ≤ number of nodes ≤ 1051 ≤ node-&gt;data ≤ 105