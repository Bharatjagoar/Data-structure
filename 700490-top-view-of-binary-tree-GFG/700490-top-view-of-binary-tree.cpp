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
	void rightbound(Node*root, int max, vector<int>&rightboundary, int axis) {
		if (!root)
			return;
		if (axis > max) {
			rightboundary.push_back(root->data);
			max++;
		}
		if (root->left)
			rightbound(root->left, max, rightboundary, axis - 1);
		if (root->right)
			rightbound(root->right, max, rightboundary, axis + 1);
	}
	
	void leftbound(Node*root, int min, vector<int>&leftboundary, int axis) {
		if (!root)
			return;
		if (axis < min) {
			leftboundary.push_back(root->data);
			min--;
		}
		if (root->left)
			leftbound(root->left, min, leftboundary, axis - 1);
		if (root->right)
			leftbound(root->right, min, leftboundary, axis + 1);
	}
	vector<int> topView(Node *root) {
		// code here
		vector<int>left;
		vector<int>right;
		int min = 0;
		int max = 0;
		leftbound(root,min,left,0);
		rightbound(root,max,right,0);
		cout<<endl;
		for(int x : left) cout<<x<<endl;
		cout<<endl;
		cout<<endl;
		for(int x : right) cout<<x<<endl;
		cout<<endl;
		return left;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna