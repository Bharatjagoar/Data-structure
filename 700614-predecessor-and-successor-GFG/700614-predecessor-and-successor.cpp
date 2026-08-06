/* Structure of a Binary Search Tree node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int x) {
		data = x;
		left = nullptr;
		right = nullptr;
	}
}; */

class Solution {
	public:
	void getpred(Node*root, int key, Node*&pred) {
		Node*current = root;
		Node*ans = nullptr;
		while (current) {
			if (!current->right) {
				if (!pred && current->data<key) {
					pred = current;
				}
				current = current->left;
			} else {
				Node*temp = current->right;
				while (temp->left && temp->left != current) {
					temp = temp->left;
				}
				if (!temp->left) {
					temp->left = current;
					current = current->right;
				} else {
					temp->left = nullptr;
					if (!pred && temp->data < key) {
						pred = temp;
					}
					if (!pred && current->data < key) {
						pred = current;
					}
					
					current = current->left;
					
				}
			}
		}
	}
	void getsuc(Node*root, int key, Node*&suc) {
		Node*current = root;
		Node*ans = nullptr;
		while (current) {
			if (!current->left) {
				if (!suc && current->data > key) {
					suc = current;
				}
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
					if (!suc && temp->data > key) {
						suc = temp;
					}
					if (!suc && current->data > key) {
						suc = current;
					}
					
					current = current->right;
					
				}
			}
		}
		// 		return ans;
	}
	vector<Node*> findPreSuc(Node* root, int key) {
		// code here
		vector<Node*>ans;
		bool found = false;
		Node*suc = nullptr;
		getsuc(root, key, suc);
		found = false;
		Node*pred = nullptr;
		getpred(root, key, pred);
		ans = {pred, suc};
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna