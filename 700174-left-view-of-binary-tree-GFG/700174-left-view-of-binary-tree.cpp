/*
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
};
*/

class Solution {
	public:
	void bfs(Node*root, vector<vector<int>> &arr) {
		if (!root)
			return;
		
		queue<Node*>q;
		q.push(root);
		q.push(nullptr);
		vector<int>curr;
		while (!q.empty()) {
			Node*temp = q.front();
			q.pop();
			
			if (!temp) {
				arr.push_back(curr);
				curr.clear();
				if (!q.empty())
					q.push(nullptr);
			}
			else {
				if (temp->left)
					q.push(temp->left);
				if (temp->right)
					q.push(temp->right);
				curr.push_back(temp->data);
			}
		}
	}
	vector<int> leftView(Node *root) {
		// code here
		vector<int>sol;
		if (!root)
			return sol;
		vector<vector<int>> arr;
		bfs(root, arr);
		
		for (vector<int> x : arr) {
			sol.push_back(x[0]);
		}
		return sol;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna