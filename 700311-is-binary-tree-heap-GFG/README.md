# [Is Binary Tree Heap](https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1)
## Medium
You are given the root of a binary tree, and the task is to determine whether it satisfies the properties of a max-heap.
A binary tree is considered a max-heap if it satisfies the following conditions:

Completeness: Every level of the tree, except possibly the last, is completely filled, and all nodes are as far left as possible.
Max-Heap Property: The value of each node is greater than or equal to the values of its children.

Examples:
Input: root = [97, 46, 37, 12, 3, 7, 31, 6, 9]
 Output: true
Explanation: The tree is complete and satisfies the max-heap property.

Input: root = [97, 46, 37, 12, 3, 7, 31, N, N, 2, 4] Output: falseExplanation: The tree is not complete and does not follow the Max-Heap Property, hence it is not a max-heap.
Constraints:1 ≤ number of nodes ≤ 1031 ≤ node-&gt;data ≤&nbsp;103