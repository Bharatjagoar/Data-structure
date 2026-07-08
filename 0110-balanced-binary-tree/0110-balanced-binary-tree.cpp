/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int check(TreeNode* root){
        if(!root) return 0;
        int hight;
        int lefth = check(root->left);
        int righth = check(root->right);

        if(min(lefth,righth)<0) return -1;
        int dif = abs(lefth-righth);
        if(dif>1) return -1;

        hight = max(lefth,righth);
        hight++;
        return hight;
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        return check(root) > 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna