class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int balance = 0;
        int start = 0;
        int size = gas.size();
        int total = 0;
        for (int i = 0; i < size; i++) {
            int gastoleave = balance + gas[i] - cost[i];
            
            total+=(gas[i] - cost[i]); // gastoleave ka total , nhi use kar sakte because hame array ka total dekhna hai 
            //gatoleave pichle gas - cost ka net result bhi add karta hai islie gastoleave nhi use kar skte
            if(gastoleave<0){
                start = i+1;
                balance = 0;
            }else{
                balance = gastoleave;
            }
        }
        if(total<0) return -1;
        else return start;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna