/* Structure of a Binary Search Tree node
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
}; */
class Solution {
	public:
	void createlinkedlist(Node* root, Node*& first) {
		Node* current = root;
		Node* prev = nullptr;
		
		while (current) {
			if (!current->left) {
				if (!first) {
					first = current;
				} else {
					prev->right = current;
				}
				prev = current;
				current = current->right;
			} else {
				Node* temp = current->left;
				while (temp->right && temp->right != current) {
					temp = temp->right;
				}
				if (!temp->right) {
					temp->right = current;
					current = current->left;
				} else {
					temp->right = nullptr;
					if (!first) {
						first = current;
					} else {
						prev->right = current;
					}
					prev = current;
					current = current->right;
				}
			}
		}
	}
	
	Node* mergesort(Node* first, Node* second) {
		if (!first)
			return second;
		if (!second)
			return first;
		
		Node* head = nullptr, *copy = nullptr;
		if (first->data > second->data) {
			head = second;
			second = second->right;
		} else if (first->data < second->data) {
			head = first;
			first = first->right;
		} else {
			head = first;
			copy = head;
			first = first->right;
			head->right = second;
			head = second;
			second = second->right;
		}
		
		if (!copy)
			copy = head;
		while (second && first) {
			if (first->data > second->data) {
				head->right = second;
				head = second;
				second = second->right;
			} else if (first->data < second->data) {
				head->right = first;
				head = first;
				first = first->right;
			} else {
				head->right = first;
				head = first;
				first = first->right;
				head->right = second;
				head = second;
				second = second->right;
			}
		}
		
		if (second)
			head->right = second;
		else
			head->right = first;
		
		return copy;
	}
	
	vector<int> merge(Node *r1, Node *r2) {
		// COACH ANALYSIS:
		// Your approach uses Morris Traversal to convert BSTs to linked lists (O(1) space),
		// which is very impressive for memory efficiency!
		//
		// Current Time Complexity: O(N + M) where N and M are nodes in the two BSTs.
		// Current Space Complexity: O(1) auxiliary space (excluding the result vector).
		//
		// LOGIC CHECK:
		// There is a subtle bug in your 'mergesort' logic. When you handle the 'else' case
		// (first->data == second->data), you are advancing both pointers and linking them,
		// but the 'head' pointer movement and the subsequent while-loop logic might
		// skip elements or create incorrect links because 'head' is updated inconsistently.
		//
		// HINT: The simplest way to merge two sorted lists is to use a 'dummy' node.
		// This removes the need for complex 'head' initialization and separate 'else'
		// blocks for equal values.
		//
		// RECOMMENDATION:
		// 1. Use a dummy node for the merge process.
		// 2. Simplify the merge loop to: if (first->data <= second->data) { link first; move first; } else { link second; move second; }
		// 3. Once fixed, this is the optimal complexity. If you get stuck, check the "Video Solutions" tab!
		
		Node* first = nullptr;
		Node* second = nullptr;
		createlinkedlist(r1, first);
		createlinkedlist(r2, second);
		Node* head = mergesort(first, second);
		
		vector<int> sol;
		while (head) {
			sol.push_back(head->data);
			head = head->right;
		}
		return sol;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna