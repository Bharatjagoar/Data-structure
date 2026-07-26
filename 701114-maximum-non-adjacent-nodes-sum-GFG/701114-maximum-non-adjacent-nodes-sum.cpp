/*
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	Node(int val) {
		data = val;
		left = nullptr;
		right = nullptr;
	}
};
*/

class Solution {
	public:
	pair<int, int> get(Node*root) {
		if (!root)
			return {0, 0};
		pair<int, int>left = get(root->left);
		pair<int, int>right = get(root->right);
		int including = root->data + left.second + right.second;
		int exclude = max(left.first, left.second) + max(right.first, right.second);
		return {including, exclude};
	}
	int getMaxSum(Node *root) {
		// code here
		pair<int, int>p = get(root);
		return max(p.first, p.second);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna