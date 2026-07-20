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
	void bfs(Node*root, vector<vector<vector<int>>> &arr) {
		if (!root)
			return;
		vector<vector<int>> cur;
		queue<tuple<Node*, int>> q;
		q.push({root, 0});
		q.push({nullptr, -1});
		
		while (!q.empty()) {
			tuple<Node*, int>temp = q.front();
			q.pop();
			int xaxis = get<1>(temp);
			if (get<0>(temp) == nullptr) {
				arr.push_back(cur);
				cur.clear();
				if (!q.empty()) {
					q.push({nullptr, -1});
				}
			} else {
				if (get<0>(temp)->left)
					q.push({get<0>(temp)->left, xaxis - 1});
				if (get<0>(temp)->right)
					q.push({get<0>(temp)->right, xaxis + 1});
				cur.push_back({get<0>(temp)->data, xaxis});
			}
		}
	}
	vector<int> bottomView(Node *root) {
		// code here
		vector<vector<vector<int>>>arr;
		bfs(root, arr);
		map<int,int>m;
		for (auto x : arr) {
			
			for (auto y : x) {
				m[y[1]] = y[0];
			}
		}
		vector<int>sol;
		for(auto p : m) sol.push_back(p.second);
		return sol;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna