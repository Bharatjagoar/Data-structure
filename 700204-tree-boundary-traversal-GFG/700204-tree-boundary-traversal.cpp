/* Node Structure
class Node {
	public:
	int data;
	Node* left, *right;
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	void leftmost(vector<int>&arr, Node*root) {
		if (root->left == nullptr && root->right == nullptr) {
			return;
		}
		arr.push_back(root->data);
		if (root->left)
			leftmost(arr, root->left);
		else
			leftmost(arr, root->right);
		
		// 			leftmost(arr,);
	}
	
	void getleaf(vector<int>&arr, Node*root) {
		if (root->left == nullptr && root->right == nullptr) {
			arr.push_back(root->data);
			return;
		}
		if (root->left)
			getleaf(arr, root->left);
		if (root->right)
			getleaf(arr, root->right);
	}
	
	void rightmost(vector<int>&arr, Node*root) {
		if (root->left == nullptr && root->right == nullptr) {
			return ;
		}
		if (root->right) {
			rightmost(arr, root->right);
		}
		else
			rightmost(arr, root->left);
		arr.push_back(root->data);
	}
	vector<int> boundaryTraversal(Node *root) {
		vector<int> arr;
		if (root->left == nullptr && root->right == nullptr) {
			arr.push_back(root->data);
			return arr;
		}
		arr.push_back(root->data);
		if (root->left)
			leftmost(arr, root->left);
		getleaf(arr, root);
		if (root->right)
			rightmost(arr, root->right);
		return arr;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna