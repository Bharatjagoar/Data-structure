# [Tree Boundary Traversal](https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1)
## Medium
Given a root of a Binary Tree,&nbsp;return its boundary traversal in the following order:

Left Boundary:&nbsp;Nodes from the root to the leftmost non-leaf node, preferring the left child over the right and excluding leaves.
Leaf Nodes:&nbsp;All leaf nodes from left to right, covering every leaf in the tree.
Reverse Right Boundary:&nbsp;Nodes from the root to the rightmost non-leaf node, preferring the right child over the left, excluding leaves, and added in reverse order.

Note:&nbsp;The root is included once, leaves are added separately to avoid repetition, and the right boundary follows traversal preference not the path from the rightmost leaf.
Examples:
Input: root = [1, 2, 3, 4, 5, 6, 7, N, N, 8, 9, N, N, N, N]
Output: [1, 2, 4, 8, 9, 6, 7, 3]
Explanation:

Input: root = [1, N, 2, N, 3, N, 4, N, N] 
Output: [1, 4, 3, 2]
Explanation:Left boundary: [1] (as there is no left subtree)
Leaf nodes: [4]
Right boundary: [3, 2] (in reverse order)
Final traversal: [1, 4, 3, 2]
Constraints:1 ≤ number of nodes ≤ 1051 ≤ node-&gt;data ≤ 105