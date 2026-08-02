# [Search a node in BST](https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1)
## Easy
Given the root of a Binary Search Tree and a node value key, return true if the node with value key is present in the BST; otherwise, return false.
Examples:
Input: root = [6, 2, 8, N, N, 7, 9], key = 8    Output: true
Explanation: 8 is present in the BST as right child of root.
Input: root = [16, 12, 18, 10, N, 17, 19], key = 14    Output: falseExplanation: 14 is not present in the BST
Constraints:1 ≤ number of nodes ≤ 3*1041 ≤ node-&gt;data, key ≤ 109