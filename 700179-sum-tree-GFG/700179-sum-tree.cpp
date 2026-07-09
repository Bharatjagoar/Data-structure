/* Tree node
struct Node
{
	int data;
	Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
	public:
	pair<bool, int> getsum(Node*root) {
		// if root is nullptr
		if (root == nullptr)
			return {true, 0};
		
		// if root is leaf then return from here
		if (root->left == nullptr && root->right == nullptr)
			return {true, root->data};
		pair<bool, int> leftsum = {true, 0};
		pair<bool, int> rightsum = {true, 0};
		
		if (root->left)
			leftsum = getsum(root->left);
		if (root->right)
			rightsum = getsum(root->right);
		
		if (!(leftsum.first && rightsum.first))
			return {false, 0};
		
		int wholesum = leftsum.second + rightsum.second ;
		if (root->data != wholesum)
			return {false, 0};
		return {true, wholesum + root->data};
		
	}
	bool isSumTree(Node* root) {
		// Your code here
		if (root->left == nullptr && root->right == nullptr)
			return true;
		pair<bool, int> ans = getsum(root);
		
		return ans.first;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna