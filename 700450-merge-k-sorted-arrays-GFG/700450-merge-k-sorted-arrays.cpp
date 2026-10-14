class Solution {
	public:
	vector<int> mergeArrays(vector<vector<int>> &arr) {
		// Code here
		priority_queue<int, vector<int>, greater<int>> pq;
		vector<int>res;
		for (auto x : arr) {
			for (int y : x) {
				pq.push(y);
			}
		}
		while (!pq.empty()) {
			res.push_back(pq.top());
			pq.pop();
		}
		return res;
	}
	
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna