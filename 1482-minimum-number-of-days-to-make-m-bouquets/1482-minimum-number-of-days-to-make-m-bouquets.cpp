class Solution {
public:
    bool check(vector<int>& arr, int m, int k, int mid) {
        int countf = 0;
        int countb = 0;
        for (int i : arr) {
            if (mid >= i)
                countf++;
            else
                countf = 0;
            if (countf == k) {
                countb++;
                countf = 0;
            }
        }
        return countb >= m;
    }
    int minDays(vector<int>& bloomday, long long int m,long long int k) {
        if(bloomday.size() < m*k ) return -1;
        // what are highs and lows ??
        int min = INT_MAX;
        int max = INT_MIN;
        for (int i : bloomday) {
            if (min > i)
                min = i;
            if (max < i)
                max = i;
        }
        int high = max;
        int low = min;
        int ans = -1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            cout << high << "\t" << low << endl;
            cout<<mid<<endl;
            if (check(bloomday, m, k, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        cout<<low<<endl;
        return low;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna