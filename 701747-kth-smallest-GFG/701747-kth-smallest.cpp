class Solution {
	public:
	void heap(vector<int>& arr, int size, int index) {
		int largest = index;
		int left = largest *2 + 1;
		int right = largest*2 + 2;
		if (left < size && arr[largest] < arr[left]) {
			largest = left;
		}
		if (right < size && arr[right] > arr[largest]) {
			largest = right;
		}
		
		if (largest != index) {
			swap(arr[largest], arr[index]);
			heap(arr, size, largest);
		}
	}
	void heapsort(vector<int>&arr, int size) {
		
		for (int i = size - 1 ; i > 0 ; i--) {
			swap(arr[0], arr[i]);
			heap(arr, i, 0) ;
		}
	}
	
	int kthSmallest(vector<int> &arr, int k) {
		// code here
		int size = arr.size();
		int start = (size/2) - 1;
		for (int i = start ; i >= 0 ; i--) {
			heap(arr, size, i);
		}
		heapsort(arr, size);
		
		return arr[k-1];
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna