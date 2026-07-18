/*
Definition for Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	void bfs(Node*root, vector<vector<int>> &arr) {
		queue <Node*>q;
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
				// cout<<
			}
		}
		
	}
	vector<int> rightView(Node *root) {
		//  code here
		vector<vector<int>> arr;
		bfs(root, arr);
		vector<int>sol;
		for (auto x : arr) {
			int size = x.size();
			int k = x[size - 1];
			sol.push_back(k);
			
		}
		return sol;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna