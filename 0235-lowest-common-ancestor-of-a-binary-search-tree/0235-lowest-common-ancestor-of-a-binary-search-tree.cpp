/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* traverse(TreeNode* root, int a, int b) {
        int bigger = a > b ? a : b;
        int smaller = a > b ? b : a;
        TreeNode* current = root;
        TreeNode* ans = nullptr;
        while (current) {
            if (!current) {
                return nullptr;
            }
            if ((bigger < current->val) && (smaller < current->val)) {
                current = current->left;
            } else if ((bigger > current->val) && (smaller > current->val)) {
                current = current->right;
            } else {
                break;
            }
        }

        return current;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return traverse(root,p->val,q->val);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna