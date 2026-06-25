class Solution {
public:
    unordered_map<char, int> maps;
    bool check() {
        for (auto i : maps) {
            if (i.second >= 2)
                return false;
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int substr = 0;
        int lastindex = 0;
        for (int i = 0; i < s.size(); i++) {
            cout << i << endl;
            auto it = maps.find(s[i]);
            if (it != maps.end()) {
                maps[s[i]]++;
            } else {
                maps[s[i]] = 1;
            }
            if (check()) {
                longest++;
            } else {
                while (s[lastindex] != s[i]) {
                    maps[s[lastindex]]--;
                    lastindex++;
                }
                maps[s[lastindex]]--;
                lastindex++;
                longest = i - lastindex + 1;   
            }
            if (longest > substr)
                substr = longest;
        }
        return substr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna