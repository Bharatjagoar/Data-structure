# [Flatten BST to sorted list](https://www.geeksforgeeks.org/problems/flatten-bst-to-sorted-list--111950/1)
## Medium
Given the root of a Binary Search Tree (BST), flatten it into a right-skewed tree such that:

The left child of every node is NULL.
The right child points to the next node in the inorder traversal (sorted order) of the BST.

Return the root of the flattened tree.
Note: The flattened tree should contain all the nodes of the original BST, preserving their inorder sequence.
Examples:
Input: root = [5, 3, 7, 2, 4, 6, 8]
Output: [2, N, 3, N, 4, N, 5, N, 6, N, 7, N, 8] Explanation: After flattening, the tree looks like this: &nbsp; &nbsp; 
Input: root = [1, N, 2, N, 3, N, 4, N, 5]Output: [1, N, 2, N, 3, N, 4, N, 5] Explanation: After flattening, the tree looks like this:
