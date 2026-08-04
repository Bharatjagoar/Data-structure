/*
Definition for Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	int traverse(Node*root, int&ans, int& k, int&index) {
		if (!root)
			return - 1;
		if (ans >-1) {
			return ans;
		}
		
		if (root->left) {
			traverse(root->left, ans, k, index);
			index++;
		}
		
		if (index == k) {
			ans = root->data;
			return ans;
		}
		if (root->right) {
			index++;
			traverse(root->right, ans, k, index);
		}
		return ans;
	}
	
	int kthSmallest(Node *root, int k) {
		// code here
		int ans = -1;
		int index = 1;
		traverse(root, ans, k, index);
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna