/* Structure of Binary Tree Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	vector<int> inOrder(Node* root) {
		// code here
		Node*current = root;
		vector<int >sol;
		while (current) {
			if (!current->left) {
				sol.push_back(current->data);
				
				current = current->right;
			} else {
				Node*temp = current->left;
				while (temp->right && temp->right != current) {
					temp = temp->right;
				}
				if (!temp->right) {
					temp->right = current;
					current = current->left;
				} else {
					temp->right = nullptr;
					sol.push_back(current->data);
					current = current->right;
				}
			}
		}
		return sol;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna