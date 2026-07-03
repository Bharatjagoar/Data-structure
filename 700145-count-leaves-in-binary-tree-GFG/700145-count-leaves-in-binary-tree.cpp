/* A binary tree node has data, pointer to left child
and a pointer to right child
struct Node
{
	int data;
	Node* left;
	Node* right;
}; */

// Class Solution
class Solution {
	public:
	// Function to count the number of leaf nodes in a binary tree.
	void traverse(Node* root, int &count) {
		if (!root)
			return;
		if (root->left == nullptr && root->right == nullptr) {
			count++;
			return;
		}
		if (root->left)
			traverse(root->left, count);
		if (root->right)
			traverse(root->right, count);
	}
	int countLeaves(Node* root) {
		// write code here
		int count = 0;
		traverse(root,count);
		return count;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna