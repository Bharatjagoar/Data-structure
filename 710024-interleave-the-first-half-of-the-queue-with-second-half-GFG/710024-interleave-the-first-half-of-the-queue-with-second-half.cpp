class Solution {
	public:
	void rearrangeQueue(queue<int> &q) {
		// code here
		int size = q.size();
		if (size <= 2)
			return;
		queue<int>first;
		queue<int>second;
		for (int i = 1 ; i <= size ; i++) {
			
			if (size%2 == 0) {
				if (i <= (size/2)) {
					first.push(q.front());
				} else {
					second.push(q.front());
				}
			}
			else {
				if (i <= (size/2)) {
					first.push(q.front());
				} else {
					second.push(q.front());
				}
			}
			q.pop();
		}
		for (int i = 1 ; i <= size; i++) {
			if (i%2 == 1) {
				if (!first.empty()) {
					q.push(first.front());
					first.pop();
				}
			} else {
				if (!second.empty()) {
					q.push(second.front());
					second.pop();
				}
			}
		}
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna