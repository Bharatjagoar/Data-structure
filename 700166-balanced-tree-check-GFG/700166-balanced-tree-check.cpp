/*
Definition for Node
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
	int check(Node* root) {
		if (!root)
			return 0;
		int hight;
		int lefth = check(root->left);
		int righth = check(root->right);
		
		if (min(lefth, righth)<0)
			return - 1;
		int dif = abs(lefth - righth);
		if (dif>1)
			return - 1;
		
		hight = max(lefth, righth);
		hight++;
		return hight;
	}
	bool isBalanced(Node* root) {
		// code here
		if (!root)
			return true;
		return check(root) > 0;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna