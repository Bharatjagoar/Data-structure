class Solution {
public:
    void check(int index, int size, vector<int>& arr) {
        int largestindex = index;
        int left = index * 2 + 1;
        int right = index * 2 + 2;
        if (left < size && arr[largestindex] < arr[left]) {
            largestindex = left;
        }
        if (right < size && arr[largestindex] < arr[right]) {
            largestindex = right;
        }

        if (largestindex != index) {
            swap(arr[largestindex], arr[index]);
            check(largestindex, size, arr);
        }
    }
    // we need to heapify the array
    void heapify(vector<int>& arr) {
        int size = arr.size();
        int init = (size / 2) - 1;
        for (int i = init; i >= 0; i--) {
            check(i, size, arr);
        }
    }
    void heapsort(vector<int>& arr) {
        int size = arr.size();

        for (int i = size - 1; i >= 0; i--) {
            swap(arr[0], arr[i]);
            check(0, i, arr);
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        heapify(nums);
        heapsort(nums);
        int size= nums.size();

        return nums[size-k];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna