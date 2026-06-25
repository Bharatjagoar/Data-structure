class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        // cout<<<<endl;
        int size = q.size();
        if(k>size ) return q;
        stack<int>st;
        vector<int>arr;
        // int k = 0;
        for(int i = 0 ; i < size ; i++){
            if(i<k){
                st.push(q.front());
            }else arr.push_back(q.front());
            q.pop();
            // k++;
        }
        while(!st.empty()) {
            q.push(st.top());
            st.pop();
        }
        for(int i : arr) q.push(i);
        return q; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna