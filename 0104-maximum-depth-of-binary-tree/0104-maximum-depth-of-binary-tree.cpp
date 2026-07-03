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
    void traverse(TreeNode* root, int& max, int& hieght) {
        if (!root)
            return;
        hieght++;
        if (hieght > max)
            max = hieght;
        if (root->left) {
            traverse(root->left, max,hieght);
            hieght--;
        }

        if(root->right) {
            traverse(root->right, max,hieght);
            hieght--;
        }
    }
    int maxDepth(TreeNode* root) {
        int max = 0;
        int height = 0;
        traverse(root,max,height);
        return max;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna