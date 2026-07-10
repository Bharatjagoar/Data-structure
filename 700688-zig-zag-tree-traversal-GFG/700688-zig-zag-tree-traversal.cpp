/*
Definition for Node
class Node {
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
	public:
	vector<int> zigZagTraversal(Node* root) {
		// code here
		queue<Node*>q;
		q.push(root);
		q.push(nullptr);
		vector<int>sol;
		vector<vector<int>> store;
		vector<int>current;
		while (!q.empty()) {
			Node*temp = q.front();
			q.pop();
			if (!temp) {
				if(!q.empty()) q.push(nullptr);
				store.push_back(current);
				current.clear();
			} else {
				if (temp->left) {
					q.push(temp->left);
				}
				if (temp->right) {
					q.push(temp->right);
				}
				current.push_back(temp->data);
			}
			
		}
		
		for(int i = 0 ; i < store.size() ; i++){
		    if(i&1){
		        reverse(store[i].begin(),store[i].end());
		    }
		}
// 		vector<int>sol;
		for(vector<int> x : store){
		    for(int y : x){
		        sol.push_back(y);
		    }
		}
		return sol;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna