/*
Definition for Node
class Node {
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	bool search(Node* root, int key) {
		// code here
		while (root) {
			
			if (root->data == key) {
				return true;
			}
			if (root->data < key)
				root = root->right;
			else
				root = root->left;
		}
		return false;
		
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna