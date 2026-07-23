/* A binary tree node
struct Node
{
	int data;
	Node* left, * right;
}; */

class Solution {
	public:
	void dfs(Node* root, int d, map<int, vector<int>> & h) {
		if (!root)
			return;
		h[d].push_back(root->data);
		dfs(root->left, d + 1, h);
		dfs(root->right, d, h);
	}
	
	vector<int> diagonal(Node *root) {
		// code here
		vector<int>sol;
		if (!root)
			return sol;
		map<int, vector<int>> h;
		int start = 0;
		dfs(root,start, h);
		
		for (auto p : h) {
			sol.insert(sol.end(), p.second.begin(), p.second.end());
		}
		// 		sol.push_back()
		return sol;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna