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
	void dfs(Node*root, map<int, vector<Node*>> &hashmap, int num1, int num2, vector<Node*>&path, bool & n1, bool &n2) {
		if (!root)
			return;
		if (n1 && n2)
			return;
		if (root->data == num1) {
			path.push_back(root);
			hashmap[num1] = path;
			n1 = true;
			path.pop_back();
		}
		if (root->data == num2) {
			path.push_back(root);
			hashmap[num2] = path;
			n2 = true;
			path.pop_back();
			
		}
		
		path.push_back(root);
		dfs(root->left, hashmap, num1, num2, path, n1, n2);
		dfs(root->right, hashmap, num1, num2, path, n1, n2);
		path.pop_back();
	}
	Node* lca(Node* root, int n1, int n2) {
		//  code here
		map<int, vector<Node*>> hashmap;
		vector<Node*>path;
		bool firstn = false;
		bool secondn = false;
		dfs(root, hashmap, n1, n2, path, firstn, secondn);
		vector<Node*>first = hashmap[n1];
		vector<Node*>second = hashmap[n2];
		int minsize = first.size()>second.size()?second.size():first.size();
		Node* prev = nullptr;
		for (int i = 0 ; i<minsize ; i++) {
			if (first[i] != second[i]) {
				break;
			}
			prev = first[i];
		}
		
		return prev;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna