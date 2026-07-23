/*
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int x) {
		data = x;
		left = NULL;
		right = NULL;
	}
}; */

class Solution {
	public:
	void dfs(Node*root, int currentsum, int hight, int&maxsum, int&maxhight) {
		currentsum = currentsum + root->data;
		if (root->left == nullptr && root->right == nullptr) {
			
			if (maxhight < hight) {
				maxhight = hight;
				maxsum = currentsum;
			}
			if (maxhight == hight) {
				if (maxsum < currentsum) {
					maxsum = currentsum;
				}
			}
// 			cout<<maxhight
			return;
		}
		if(root->left) dfs(root->left,currentsum,hight+1,maxsum,maxhight);
		if(root->right) dfs(root->right,currentsum,hight+1,maxsum,maxhight);
	}
	int sumOfLongRootToLeafPath(Node *root) {
		// code here
		int maxsum = 0;
		int maxhight = 0 ;
		int currentsum = 0;
		int hight = 0;
		dfs(root,currentsum,hight,maxsum,maxhight);
		return maxsum;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna