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
    void traverse(TreeNode* root, vector<int>& sol) {
        if (!root)
            return;
        sol.push_back(root->val);
        if (root->left)
            traverse(root->left, sol);

        if (root->right)
            traverse(root->right, sol);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> sol;
        traverse(root, sol);
        return sol;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna