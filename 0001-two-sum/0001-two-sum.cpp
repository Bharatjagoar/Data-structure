class Solution {
public:
    vector<int> twoSum(vector<int>&arr, int target) {
        unordered_map<int ,int >map;
        int size = arr.size();
        vector<int>sol;
        for(int i = 0 ; i < size ; i++){
            auto it = map.find(target - arr[i]);
            if(it != map.end()){
                sol.push_back(i);
                sol.push_back(map[target-arr[i]]);
                return sol;
            }else{
                map[arr[i]]=i;
            }
        }
        return sol;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna