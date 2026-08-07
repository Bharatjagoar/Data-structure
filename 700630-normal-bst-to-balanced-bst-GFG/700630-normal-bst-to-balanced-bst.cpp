/* BST Node Structure
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
}; */

class Solution {
	public:
	void traverse(Node*root, vector<int>&arr) {
		if (!root)
			return;
		traverse(root->left, arr);
		arr.push_back(root->data);
		traverse(root->right, arr);
	}
	Node* createbst(vector<int>&arr, int start, int end) {
		if (end == start)
			return nullptr;
		
		Node*root = nullptr;
		int mid = start + (end - start)/2;
		root = new Node(arr[mid]);
		Node*left = createbst(arr, start, mid);
		Node*right = createbst(arr, mid + 1, end);
		root->left = left;
		root->right = right;
		return root;
	}
	Node* balanceBST(Node* root) {
		// Code here
		vector<int>arr;
		traverse(root, arr);
		int size = arr.size() - 1;
		return createbst(arr, 0, size+1);
		
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna