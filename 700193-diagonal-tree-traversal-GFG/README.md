# [Diagonal Tree Traversal](https://www.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1)
## Medium
Given a Binary Tree, return the diagonal traversal of the binary tree.
Consider lines of slope -1 passing between nodes. Given a Binary Tree, return a single list containing all diagonal elements in a binary tree belonging to same line.If the diagonal element are present in two different subtrees then left subtree diagonal element should be taken first and then right subtree.&nbsp;
Examples :
Input : root = [8, 3, 10, 1, 6, N, 14, N, N, 4, 7, 13]Output : [8, 10, 14, 3, 6, 7, 13, 1, 4]
Explanation:
Diagonal Traversal of binary tree : 8 10 14 3 6 7 13 1 4
Input: root = [1, 2, N, 3, N]Output: [1, 2, 3]
Constraints:1 &lt;= number of nodes&lt;= 1051 &lt;= node-&gt;data &lt;= 105