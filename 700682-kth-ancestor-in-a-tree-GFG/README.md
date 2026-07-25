# [Kth Ancestor in a Tree](https://www.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1)
## Medium
Given a binary tree with n nodes, a target node value, and a positive integer k, find the kth ancestor of the given node.
The kth ancestor of a node is the node that lies k levels above it in the tree. If the given node does not have a kth ancestor, return -1.
Notes

It is guaranteed that the given node exists in the binary tree.
All node values in the tree are distinct.

Examples :
Input: root = [1, 2, 3, 4, 5], k = 2, node = 4Output: 1
Explanation: The ancestors of node 4 are 2 and 1. Moving 2 levels upward from node 4 reaches node 1, so the output is 1.
Input: root = [1, 2, 3], k = 1, node = 3 &nbsp;  Output: 1
Explanation: The parent (1st ancestor) of node 3 is 1. Therefore, the output is 1.
Input: root = [1, 3, 2], k = 3, node = 2  Output: -1Explanation: Node 2 has only one ancestor, which is 1. Since a 3rd ancestor does not exist, the output is -1.
Constraints:1 ≤ n&nbsp;≤ 1051 ≤&nbsp;k ≤&nbsp;1001 ≤ Node-&gt;data ≤&nbsp;n