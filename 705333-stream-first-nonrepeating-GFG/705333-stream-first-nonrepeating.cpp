class Solution {
	public:
	string firstNonRepeating(string &s) {
		// code here
		
		int size = s.size();
		if (size == 1)
			return s;
		
		int freq[26] = {0};
		// cout<<freq[5]<<endl;
		string sol = "";
		queue<char>q;
		q.push(s[0]);
		freq[int(s[0]) - 97]++;
		sol += s[0];
		for (int i = 1 ; i < size ; i++) {
			freq[int(s[i]) - 97]++;
			if (freq[int(s[i]) - 97]<=1)
				q.push(s[i]);
			while (!q.empty() && freq[int(q.front()) - 97]>1) {
				q.pop();
			}
			if (!q.empty())
				sol += q.front();
			else
			    sol+='#';
			}
		return sol;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna