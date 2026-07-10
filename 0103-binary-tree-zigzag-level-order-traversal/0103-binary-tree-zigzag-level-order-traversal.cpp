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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> store;
        if(!root) return store;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        vector<int> sol;
        vector<int> current;
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if (!temp) {
                if (!q.empty())
                    q.push(nullptr);
                store.push_back(current);
                current.clear();
            } else {
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
                current.push_back(temp->val);
            }
        }

        for (int i = 0; i < store.size(); i++) {
            if (i & 1) {
                reverse(store[i].begin(), store[i].end());
            }
        }
        return store;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna