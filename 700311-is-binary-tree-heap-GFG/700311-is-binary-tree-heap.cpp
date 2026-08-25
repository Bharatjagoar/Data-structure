/*
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = NULL;
	}
};
*/

class Solution {
	void levelordertraversal(Node*root, vector<vector<Node*>> &arr) {
		queue<Node*>q;
		q.push(root);
		q.push(nullptr);
		vector<Node*>current;
		current.push_back(root);
		arr.push_back(current);
		current.clear();
		while (!q.empty()) {
			Node*temp = q.front();
			q.pop();
			if (temp) {
				current.push_back(temp->left);
				current.push_back(temp->right);
				if (temp->left)
					q.push(temp->left);
				if (temp->right)
					q.push(temp->right);
				
			} else {
				arr.push_back(current);
				current.clear();
				if (!q.empty()) {
					q.push(nullptr);
				}
			}
		}
	}
	void checkmaxheap(Node*root, Node*parent, bool&flag) {
		if (!flag || !root)
			return;
		if (parent) {
			if (root->data >parent->data) {
				flag = false;
				return;
			}
		}
		
		checkmaxheap(root->left, root, flag);
		checkmaxheap(root->right, root, flag);
		
	}
	public:
	bool isHeap(Node* tree) {
		// code here
		bool res = true;
		Node*parent = nullptr;
		checkmaxheap(tree, parent, res);
		if (!res)
			return false;
		vector<vector<Node*>> level;
		levelordertraversal(tree, level);
		bool isnull = false;
		for (auto i : level) {
			for (Node*x : i) {
				if (isnull) {
					if (x)
						return false;
					
				}
				if (x == nullptr) {
					isnull = true;
				}
			}
		}
		return res;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna