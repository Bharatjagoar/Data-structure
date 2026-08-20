// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
	public:
	// Function to sort an array using Heap Sort.
	void heapify(vector<int>&arr, int size, int index) {
		int smallest = index;
		int left = smallest*2 + 1;
		int right = smallest*2 + 2;
		if (left <size && arr[left] > arr[smallest]) {
			smallest = left;
		}
		if (right < size && arr[right] > arr[smallest]) {
			smallest = right;
		}
		
		if (smallest != index) {
			swap(arr[smallest], arr[index]);
			heapify(arr, size, smallest);
		}
	}
	void sort(vector<int>&arr, int & size) {
		int sortedptr = size - 1;
		for (int i = size - 1 ; i > 0 ; i--) {
			swap(arr[i], arr[0]);
			heapify(arr, i, 0);
		}
	}
	
	void heapSort(vector<int>& arr) {
		// code here
		int size = arr.size();
		
		int start = ((size)/2) - 1;
		for (int i = start ; i >= 0 ; i--) {
			heapify(arr, size, i);
		}
		sort(arr, size);
		
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna