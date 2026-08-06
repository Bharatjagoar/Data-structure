/*
Node is as follows
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
	void traverse(Node*root, vector<int>&arr) {
		if (!root)
			return;
		traverse(root->left, arr);
		arr.push_back(root->data);
		traverse(root->right, arr);
	}
	bool findTarget(Node *root, int target) {
		// your code here.
		unordered_set<int>s;
		
		vector<int>arr;
		traverse(root, arr);
		int j = arr.size() - 1;
		int i = 0;
		while (i<j) {
			if (arr[i]+arr[j] == target) {
				return true;
			}
			else if (arr[i]+arr[j]>target) {
				j--;
			} else {
				i++;
			}
		}
		return false;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna