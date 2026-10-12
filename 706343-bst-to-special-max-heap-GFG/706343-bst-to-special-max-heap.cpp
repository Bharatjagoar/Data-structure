/* Binary Tree Node Structure
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
	void inorder(vector<int>&arr, Node*root) {
		if (!root)
			return;
		
		if (root->left)
			inorder(arr, root->left);
		arr.push_back(root->data);
		if (root->right)
			inorder(arr, root->right);
		
	}
	void postorder(Node*root,vector<int>&arr,int& index) {
		if (!root) {
			return;
		}
		
		if (root->left) {
			postorder(root->left,arr,index);
		}
		
		if (root->right) {
			postorder(root->right,arr,index);
		}
		root->data = arr[index];
		index++;
	}
	void convertToMaxHeap(Node* root) {
		// code here
		vector<int>arr;
		inorder(arr, root);
		int index = 0;
		postorder(root, arr,index);
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna