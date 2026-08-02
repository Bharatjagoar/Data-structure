class Solution {
	public:
	void flatten(Node *root) {
		// code here
		Node*current = root;
		while (current) {
			if (!current->left) {
				
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
					// 3 -> 4 ,
					temp->right = current->right;
					// 	temp->left = nullptr;
					current->right = current->left;
					current->left = nullptr;
					current = current->right;
				}
			}
		}
		
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna