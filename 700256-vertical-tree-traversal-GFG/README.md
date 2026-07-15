# [Vertical Tree Traversal](https://www.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1)
## Medium
Given the root of a Binary Tree, find the vertical traversal of the tree starting from the leftmost level to the rightmost level.
Note: If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.
Examples:
Input: root = [1, 2, 3, 4, 5, 6, 7, N, N, N, 8, N, 9, N, 10, 11, N]       &nbsp;            
Output: [[4], [2], [1, 5, 6, 11], [3, 8, 9], [7], [10]]
Explanation: The below image shows the horizontal distances used to print vertical traversal starting from the leftmost level to the rightmost level. &nbsp; &nbsp; 

Input: root = [1, 2, 3, 4, 5, N, 6]     
Output: [[4], [2], [1, 5], [3], [6]]Explanation: From left to right the vertical order will be [[4], [2], [1, 5], [3], [6]]
