/* Structure of a Binary Search Tree node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	bool traverse(Node*root, int min, int max) {
		if (!root)
			return true;
		// for left
		if (root->data <= min) {
			
			return false;
		}
		
		if (root->data >= max ) {
			
			return false;
		}
		
		return traverse(root->left, min, root->data) && traverse(root->right, root->data, max);
	}
	bool isBST(Node* root) {
		// code here
		int max = INT_MAX;
		int min = INT_MIN;
		return traverse(root, min, max);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna