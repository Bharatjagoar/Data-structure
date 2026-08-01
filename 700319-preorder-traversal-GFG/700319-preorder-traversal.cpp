/* Structure of Tree Node
class Node
{
	int data;
	Node* left;
	Node* right;
	
	Node(int x) {
		data = x;
		left = right = NULL;
	}
}; */

class Solution {
	public:
	vector<int> preOrder(Node* root) {
		// code here
		vector<int>sol;
		Node*current = root;
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
				    sol.push_back(current->data);
					temp->right = current;
					current = current ->left;
					
				} else {
					temp->right = nullptr;
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