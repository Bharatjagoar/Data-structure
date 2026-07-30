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
// 1st quue is for getting all the node that are to be burnt
// 2nd is to get there adjecent nodes.

class Solution {
	
	public:
	bool burntree(int&data, queue<Node*>&fetch, queue<Node*>&adj,
	unordered_set<Node*>&setp, unordered_map<Node*, Node*>&hmap) {
		// jitne bhi nodes fetch me hai pehle uske adjecnets sare adjqueue me push karo
		// fir ye fetch , end me empty ho jaega.
		// then fir put all the items in get all items in fetch from adjecent
		bool pushed = false;
		while (!fetch.empty() || !adj.empty()) {
			pushed = false;
			while (!fetch.empty()) {
				
				Node* temp = fetch.front();
				fetch.pop();
				Node*parentNode = hmap[temp];
				if (parentNode) {
					if (setp.find(parentNode) == setp.end()) {
						setp.insert(parentNode);
						adj.push(parentNode);
						pushed = true;
						
					}
					
				}
				if (temp->left && (setp.find(temp->left) == setp.end())) {
					setp.insert(temp->left);
					pushed = true;
					adj.push(temp->left);
				}
				if (temp->right && (setp.find(temp->right) == setp.end())) {
					setp.insert(temp->right);
					pushed = true;
					adj.push(temp->right);
					// 	cout << "tracking psuhed" << endl;
				}
			}
			if (pushed)
				data++;
			
			while (!adj.empty()) {
				Node*temp = adj.front();
				adj.pop();
				fetch.push(temp);
			}
			// 			cout << "this is data :: " << pushed << endl;
		}
		
	}
	void getNode(Node* root, int data, Node*&target, unordered_map<Node*, Node*>&parent) {
		if (!root)
			return;
		if (data == root->data)
			target = root;
		if (root->left)
			parent[root->left] = root;
		if (root->right)
			parent[root->right] = root;
		
		if (root->left) {
			getNode(root->left, data, target, parent);
		}
		if (root->right) {
			getNode(root->right, data, target, parent);
		}
	}
	int minTime(Node* root, int target) {
		// code here
		unordered_map<Node*, Node*>parent;
		Node*pointer = nullptr;
		getNode(root, target, pointer, parent);
		int counter = 0;
		unordered_set<Node*>setp;
		queue<Node*>fetch;
		queue<Node*>adj;
		fetch.push(pointer);
		setp.insert(pointer);
		burntree(counter, fetch, adj, setp, parent);
		return counter;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna