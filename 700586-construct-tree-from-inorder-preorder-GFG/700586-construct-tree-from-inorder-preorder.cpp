/* Structure of a Tree Node
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	int getindex(vector<int>&arr, int num, int start, int end) {
		int index = -1;
		for (int i = start ; i <= end; i++) {
			if (num == arr[i]) {
				index = i;
				break;
			}
		}
		return index;
	}
	Node* makemytree(vector<int>&inorder, vector<int>&preorder, int start, int end, int&preorderindex) {
		if (start == end) {
			Node*root = new Node(preorder[preorderindex]);
			return root;
		}
		// 		if ()
		int rootindex = getindex(inorder, preorder[preorderindex], start, end);
		// 		cout<<"preorder : "<<preorder[preorderindex]<<"\t"<<"root :: "<<rootindex<<endl;
		Node*currentRoot = new Node(inorder[rootindex]);
		Node*left = nullptr;
		Node * right = nullptr;
		if (rootindex != start) {
			preorderindex++;
			left = makemytree(inorder, preorder, start, rootindex - 1, preorderindex);
		}
		if (rootindex != end) {
			preorderindex++;
			right = makemytree(inorder, preorder, rootindex + 1, end, preorderindex);
		}
		currentRoot->left = left;
		currentRoot->right = right;
		return currentRoot;
	}
	
	Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
		// code here
		Node* root = new Node(preorder[0]);
		int size = inorder.size();
		int preorderindex = 0;
		root = makemytree(inorder, preorder, 0, size - 1, preorderindex);
		return root;
		
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna