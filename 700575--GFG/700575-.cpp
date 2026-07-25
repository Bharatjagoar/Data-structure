/*
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = NULL;
	}
};
*/
class Solution {
	public:
	
	void dfs(Node*root, int k, vector<int>&arr, int&count) {
		if (!root)
			return;
		arr.push_back(root->data);
		if (root->left)
			dfs(root->left, k, arr, count);
		if (root->right)
			dfs(root->right, k, arr, count);
		int size = arr.size();
		int sum = 0;
		
		for (int i = size - 1; i >= 0; i--) {
			sum = sum + arr[i];
			if (sum == k) {
				count++;
				// break;
			}
		}
		arr.pop_back();
		
	}
	int countAllPaths(Node *root, int k) {
		// code here
		vector<int>path;
		int count = 0;
		dfs(root, k, path, count);
		return count;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna