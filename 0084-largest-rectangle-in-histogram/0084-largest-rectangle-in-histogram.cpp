class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int size = arr.size();
        if (size == 1)
            return arr[0];
        vector<int> nextsm(size);
        vector<int> prev(size);
        stack<int> st;
        st.push(-1);
        int i = 0;
        int j = size - 1;
        int k = 0;
        while (k < size) {
            while (st.top() != -1 && arr[st.top()] >= arr[k])
                st.pop();
            prev[k] = st.top();
            st.push(k);
            k++;
        }
        while (st.top() != -1 && !st.empty())
            st.pop();

        k--;
        while (k >= 0) {
            while (st.top() != -1 && arr[st.top()] >= arr[k])
                st.pop();
            nextsm[k] = st.top();
            st.push(k);
            k--;
        }
        cout << endl;
        long long int maxarea = -1;
        int right = -1;
        int left = -1;
        for (long long int i = 0; i < arr.size(); i++) {
            if (nextsm[i] == -1)
                right = size -1 ;
            else
                right = nextsm[i]-1;

            if (prev[i] == -1)
                left = 0;
            else
                left = prev[i] + 1;
            long long int width = right - left +1 ;
            if (arr[i] * width > maxarea)
                maxarea = arr[i] * width;
        }
        if(arr[i]> maxarea) return arr[i];
        return maxarea;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna