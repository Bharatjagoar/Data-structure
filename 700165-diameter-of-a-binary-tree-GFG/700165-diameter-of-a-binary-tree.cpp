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
	void gethight(Node* root, int hight, int& max) {
		if (!root)
			return;
		if (hight > max)
			max = hight;
		if (root->left) {
			hight++;
			gethight(root->left, hight, max);
			hight--;
		}
		if (root->right) {
			hight++;
			gethight(root->right, hight, max);
			hight--;
		}
	}
	void getdiameter(Node* root, int& maxd) {
		int lefthight = 0;
		int righthight = 0;
		int hight = 0;
		int max = 0;
		int diameter = 0;
		if (root->left) {
			gethight(root->left, hight, max);
			lefthight = max + 1;
			max = 0;
		}
		if (root->right) {
			gethight(root->right, hight, max);
			righthight = max + 1;
			max = 0;
		}
		if (righthight + lefthight > maxd)
			maxd = righthight + lefthight;
		if (root->left) {
			getdiameter(root->left, maxd);
		}
		if (root->right) {
			getdiameter(root->right, maxd);
		}
	}
	int diameter(Node* root) {
		// code here
		int maxd = 0;
		getdiameter(root, maxd);
		return maxd;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna