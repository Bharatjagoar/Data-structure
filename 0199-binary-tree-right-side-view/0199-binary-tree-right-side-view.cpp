/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void bfs(TreeNode* root, vector<vector<int>>& arr) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        vector<int> curr;
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if (!temp) {
                arr.push_back(curr);
                curr.clear();
                if (!q.empty())
                    q.push(nullptr);
            } else {
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);

                curr.push_back(temp->val);
                // cout<<
            }
        }
    }
    vector<int> rightSideView(TreeNode* root) {

        vector<vector<int>> arr;
        vector<int> sol;
        if(!root) return sol;
        bfs(root, arr);
        for (auto x : arr) {
            int size = x.size();
            int k = x[size - 1];
            sol.push_back(k);
        }
        return sol;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna