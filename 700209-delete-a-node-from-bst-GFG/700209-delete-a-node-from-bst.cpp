/* Structure of a Binary Search Tree node
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
}; */

class Solution {
	public:
	Node* getmin(Node* root) {
		Node* prev = nullptr;
		Node* curr = root;
		while (curr->left) {
			prev = curr;
			curr = curr->left;
		}
		if (prev)
			prev->left = curr->right; // relink orphaned right subtree, don't drop it
		return curr;
	}
	
	Node* getmax(Node* root) {
		Node* prev = nullptr;
		Node* curr = root;
		while (curr->right) {
			prev = curr;
			curr = curr->right;
		}
		if (prev)
			prev->right = curr->left; // relink orphaned left subtree
		return curr;
	}
	Node* delNode(Node* root, int x) {
		// code here
		// find the node
		Node*prev = nullptr;
		Node*current = root;
		while (current) {
			if (current ->data == x)
				break;
			prev = current;
			if (current->data > x)
				current = current->left;
			else
				current = current->right;
			
		}
		if (!current)
			return root;
		Node*newhead = nullptr;
		bool direction = false;
		if (current->right) {
			newhead = getmin(current->right);
		}
		if (current->left && !newhead) {
			newhead = getmax(current->left);
			direction = true;
		}
		if (newhead) {
			if (!direction) {
				if (newhead != current->right) {
					newhead->right = current->right;
				}
				newhead->left = current->left;
			} else {
				if (newhead != current->left) {
					newhead->left = current->left;
				}
				newhead->right = current->right;
			}
		}
		if (prev) {
			if (prev->right == current) {
				prev->right = newhead;
			} else {
				prev->left = newhead;
			}
			return root;
		} else {
			return newhead;
		}
		
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna