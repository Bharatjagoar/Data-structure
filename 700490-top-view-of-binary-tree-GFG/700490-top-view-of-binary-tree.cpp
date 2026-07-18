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
	void bfs(Node*root, vector<vector<pair<Node*, int>>>&arr) {
		int axis = 0;
		queue<pair<Node*, int>> q; // first will represent the data second will represent the axis
		q.push({root, axis});
		q.push({nullptr, -1});
		vector<pair<Node*, int>> sol;
		while (!q.empty()) {
			pair<Node*, int>p = q.front();
			q.pop();
			if (p.first == nullptr) {
				
				arr.push_back(sol);
				sol.clear();
				if (!q.empty())
					q.push({nullptr, -1});
			} else {
				if ((p.first)->left)
					q.push({(p.first)->left, (p.second) - 1});
				if ((p.first)->right)
					q.push({(p.first)->right, (p.second) + 1});
				sol.push_back(p);
			}
		}
	}
	vector<int> topView(Node *root) {
		// code here
		vector<vector<pair<Node*,int>>>makepair;
		map<int , int >check;
		bfs(root,makepair);
		for(auto x : makepair){
		    for(auto y : x){
		        if(check.find(y.second) == check.end() ){
		            check[y.second] = (y.first)->data;
		        }
		    }
		}
		vector<int>sol;
		for(auto p :check){
		    sol.push_back(p.second);
		}
		return sol;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna