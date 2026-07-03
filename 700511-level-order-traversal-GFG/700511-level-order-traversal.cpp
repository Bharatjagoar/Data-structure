/* A binary tree Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	// Constructor
	Node(int val) {
		data = val;
		left = nullptr;
		right = nullptr;
	}
};
*/

class Solution {
	public:
	vector<int> levelOrder(Node *root) {
		// code here
		vector<int>sol;
		queue<Node*>q;
		q.push(root);
// 		q.push(nullptr);
		while (!q.empty()) {
			Node*temp = q.front();
			q.pop();
			sol.push_back(temp->data);
			if(temp->left) q.push(temp->left);
			if(temp->right) q.push(temp->right);
		}
		
		return sol;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna