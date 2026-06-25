class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        queue<int>q;
        vector<int>sol;
        int size = arr.size();
        for(int i = 0 ; i < size ; i++){
            if(arr[i] < 0) q.push(i);//pushing index init !! 
        }
        int lastindex = 0 ;
        for(int  i = k-1 ; i < size ; i++){
            if(!q.empty() && q.front() >= (i+1-k) && q.front()<=i){
                sol.push_back(arr[q.front()]);
            }else{
                sol.push_back(0);
            }
            lastindex++;
            
                if( !q.empty() && lastindex>q.front()) q.pop();    
            
        }
        return sol;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna