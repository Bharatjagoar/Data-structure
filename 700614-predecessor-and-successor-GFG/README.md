# [Predecessor and Successor](https://www.geeksforgeeks.org/problems/predecessor-and-successor/1)
## Medium
Given the root of a Binary Search Tree (BST) and an integer key, find the inorder predecessor and inorder successor of the given key.

The inorder predecessor is the node with the largest value smaller than the given key.
The inorder successor is the node with the smallest value greater than the given key.

If the predecessor or successor does not exist, return NULL for that position.
Note: The key may or may not be present in the BST.
Examples :
Input: root = [50, 30, 70, 20, 40, 60, 80], key = 65Output: [60, 70]
Explanation: In the given BST the inorder predecessor of 65 is 60 and inorder successor of 65 is 70.
Input: root = [8, 1, 9, N, 4, N, 10, 3], key = 8 Output: [4, 9]
Explanation: In the given BST the inorder predecessor of 8 is 4 and inorder successor of 8 is 9.
