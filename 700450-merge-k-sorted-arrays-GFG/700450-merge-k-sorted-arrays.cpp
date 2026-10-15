class Node {
	public:
	int row;
	int col;
	int data;
	
	Node(int i, int j, int data) {
		this->row = i;
		this->col = j;
		this->data = data;
	}
};

class compare {
	public:
	bool operator()(Node*a, Node*b) {
		return a->data > b->data;
	}
};

class Solution {
	public:
	vector<int> mergeArrays(vector<vector<int>> &mat) {
		// Code here
		priority_queue<Node*, vector<Node*>, compare>pq;
		int count = 0;
		for (vector<int>arr: mat) {
			Node*temp = new Node(count, 0, arr[0]);
			count++;
			pq.push(temp);
		}
		vector<int>res;
		
		while (!pq.empty()) {
			Node* temp = pq.top();
			pq.pop();
			int row = temp->row;
			int col = temp->col;
			res.push_back(temp->data);
			int currcol = mat[row].size();
			if (currcol - 1 > col) {
				col++;
				int newdata = mat[row][col];
				Node*temp = new Node( row, col,newdata);
				pq.push(temp);
			}
		}
		return res;
	}
	
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna