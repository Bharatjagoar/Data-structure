/* Structure of a Binary Search Tree node
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
	
	void traverse(Node*root, Node*&head, Node*&first) {
		if (!root)
			return;
		traverse(root->left, head, first);
		if (head) {
			root->left = nullptr;
			head->right = root;
			head = head->right;
			
		}
		else {
			head = root;
			first = head;
		}
		traverse(root->right, head, first);
	}
	
	void move(Node*root, Node*head) {
		
		Node*current = root;
		while (current) {
			if (!current->left) {
				current = current->right;
				
			} else {
				Node*temp = current->left;
				while (temp->right && temp->right != current) {
					temp = temp->right;
				}
				if (temp->right) {
					temp->right = current;
					current = current->left;
				} else {
					// 	temp->right = nullptr;
					current->left = nullptr;
					current = current->right;
					
				}
			}
			
		}
	}
	Node *flattenBST(Node *root) {
		// code here
		Node*first = nullptr;
		Node*head = nullptr;
		traverse(root, head, first);
		return first;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna