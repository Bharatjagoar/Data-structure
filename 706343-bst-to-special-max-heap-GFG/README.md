# [BST to Special Max Heap](https://www.geeksforgeeks.org/problems/bst-to-max-heap/1)
## Medium
Given a Binary Search Tree, convert it into a Special Max Heap with the condition that all the values in the left subtree of a node should be less than all the values in the right subtree of the node. This condition is applied on all the nodes in the so converted Max Heap.
Examples:
Input: root[] = [4, 2, 6, 1, 3, 5, 7]

Output: [1, 2, 3, 4, 5, 6, 7] 
Explanation: The given BST has been transformed into a Special Max Heap while keeping the tree structure unchanged, and its postorder traversal is 1 2 3 4 5 6 7.The converted tree is:


Input: root[] = [5, 3, 8, 2, 4, 7, 9]

Output: [2, 3, 4, 5, 7, 8, 9]
Explanation: The given BST has been transformed into a Special Max Heap while keeping the tree structure unchanged, and its postorder traversal is 2 3 4 5 7 8 9.
The converted tree is:

&nbsp;