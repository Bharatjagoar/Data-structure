# [Binary Tree from Inorder and Postorder](https://www.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1)
## Medium
Given two arrays representing the inorder&nbsp;and&nbsp;postorder traversals of a binary tree, your task is to construct the binary tree and return its&nbsp;root.
Note: The inorder and postorder traversals contain unique values, and every value present in the postorder traversal is also found in the inorder traversal.
Examples:
Input: inorder[] = [4, 8, 2, 5, 1, 6, 3, 7], postorder[] = [8, 4, 5, 2, 6, 7, 3, 1]
Output: [1, 2, 3, 4, 5, 6, 7, N, 8]
Explanation: For the given inorder and postorder traversal of tree the resultant binary tree will be:
Input: inorder[] = [9, 5, 2, 3, 4], postorder[] = [5, 9, 3, 4, 2]
Output: [2, 9, 4, N, 5, 3]
Explanation: The resultant binary tree will be: 
Constraints:1 ≤ number of nodes ≤ 1030 ≤ inorder[i], postorder[i] ≤ 106