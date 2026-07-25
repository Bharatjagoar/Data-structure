/* Definition for Node
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
	void dfs(Node*root, vector<int>&arr, int node, bool found, vector<int>&permanent) {
		if (!root || found)
			return ;
		arr.push_back(root->data);
		
		if (root->data == node) {
			found = true;
			permanent = arr;
			return ;
		}
		dfs(root->left, arr, node, found, permanent);
		dfs(root->right, arr, node, found, permanent);
		arr.pop_back();
	}
	int kthAncestor(Node *root, int k, int node) {
		// code he1
		vector<int>arr;
		vector<int>p;
		bool found = false;
		dfs(root, arr, node, found, p);
		int size = p.size();
		if (p.size() <= k) {
			return - 1;
		}

		for (int i = 0 ; i < k ; i++) {
			
			p.pop_back();
		}
		size = p.size();
		return p[size - 1];
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna