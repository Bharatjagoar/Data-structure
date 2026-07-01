class Solution {
	public:
	vector<int> maxOfSubarrays(vector<int>& arr, int k) {
		// code here
		int maxindex = 0;
		int size = arr.size();
		if (size == 1)
			return arr;
		for (int i = 0 ; i < k ; i++) {
			if (arr[i] > arr[maxindex])
				maxindex = i;
		}
		vector<int>sol;
		sol.push_back(arr[maxindex]);
		int lastindex = 1;
		int head = k - 1;
		for (int i = k; i < size ; i++) {
			if (arr[i] > arr[maxindex])
				maxindex = i;
			
			if(maxindex < lastindex ){
			    maxindex = lastindex;
			    for(int j = lastindex ; j <=i ;j++ ){
			        if(arr[j] > arr[maxindex]) maxindex = j;
			    }
			}
// 			cout<< i <<"  "<<"\t"<<arr[maxindex]<<endl;
			sol.push_back(arr[maxindex]);
			lastindex++;
		}
		return sol;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna