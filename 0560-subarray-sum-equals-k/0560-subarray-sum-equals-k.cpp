class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        // cout << "hello world !! " << endl;
        int sum = 0;
        for (int x : arr) {
            sum += x;
        }
        // cout << sum << endl;

        int size = arr.size();
        int counter = 0;
        for (int i = 0; i < size; i++) {
            sum = 0;
            for (int j = i; j < size; j++) {
                sum += arr[j];
                if(sum == k) counter++;
            }
        }
        cout<<counter<<endl;
        return counter;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna