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
    bool check(TreeNode* root, int target, int curr) {
        if (!root)
            return false;
        bool left=false, right = false;
        int val = root->val;
        if (root->left) {

            curr += val;
            left = check(root->left, target, curr);

            curr -= val;
        }
        if (right || left)
            return true;
        if (root->right) {
            curr += val;
            right = check(root->right, target, curr);
        }
        if (right || left)
            return true;
        if (root->left == nullptr && root->right == nullptr) {

            curr += val;
            if (target == curr)
                return true;
            else {
                curr -= val;
                return false;
            }
        }
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {

        return check(root, targetSum, 0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna