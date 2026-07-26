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
	void dfs(Node*root, int k, int node, int&hight, int& ans) {
		if (hight>-1 || !root)
			return;
		if (root->data == node) {
			hight = 1;
			return;
		}
		
		dfs(root->left, k, node, hight, ans);
		dfs(root->right, k, node, hight, ans);
// 		cout << hight<<"\t"<<root->data << endl;
		if (hight == k) {
			
			ans = root->data;
		}
		if (hight>-1)
			hight++;
	}
	int kthAncestor(Node *root, int k, int node) {
		// code here
		int ans = -1;
		int hight = -1;
		dfs(root, k, node, hight, ans);
		
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna