class Solution {
	public:
	int startStation(vector<int> &gas, vector<int> &cost) {
		//  code here
		int size = gas.size();
		int sum = 0 ;
		for (int i = 0 ; i < size ; i++) {
			sum += (gas[i] - cost[i]);
		}
		if (sum < 0)
			return - 1;
		int start = 0;
		int balance = 0;
		
		for (int i = start ; i < size ; i++) {
			int gastoleave = balance + gas[i]-cost[i];
			if (gastoleave < 0) {
				start = i + 1;
				balance = 0;
			} else {
				balance = gastoleave;
			}
		}
		return start;
	}
	
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna