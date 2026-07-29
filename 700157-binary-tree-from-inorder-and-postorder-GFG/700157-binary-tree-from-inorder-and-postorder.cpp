/* Node Structure
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	Node(int x) {
		data = x;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	int getindex(vector<int>&arr, int key, int start, int end) {
		int index = -1;
		for (int i = start ; i <= end ; i++) {
			if (arr[i] == key)	{
				index = i;
				break;
			}
		}
		return index;
	}
	Node*maketree(vector<int>&inorder, vector<int>&postorder, int start, int end, int&postindex) {

		if (start == end) {
			return new Node(postorder[postindex]);
		}
		int rootindex = getindex(inorder, postorder[postindex], start, end);
		Node*current = new Node(postorder[postindex]);
		Node* left = nullptr;
		Node*right = nullptr;
		if (rootindex != end) {
			postindex--;
			right = maketree(inorder, postorder, rootindex + 1, end, postindex);
		}
		if (rootindex != start) {
			postindex--;
			left = maketree(inorder, postorder, start, rootindex - 1, postindex);
		}
		
		current->left = left;
		current->right = right;
		return current;
	}
	Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
		// code here
		int size = postorder.size();
		int postindex = size - 1;
		Node*root = maketree(inorder, postorder, 0, size - 1, postindex);
		return root;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna