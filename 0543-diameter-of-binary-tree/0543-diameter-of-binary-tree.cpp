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
    pair<int, int> getdiameter(TreeNode* root) {
        if (!root)
            return {0, 0};
        pair<int, int> data, rightdata, leftdata;
        leftdata = getdiameter(root->left);
        rightdata = getdiameter(root->right);
        int hight = 0;
        hight = max(leftdata.second, rightdata.second);
        int diameter =  max(max(leftdata.first,rightdata.first),(leftdata.second+rightdata.second)) ;
        hight++;
        if(root->val == -9) cout<<diameter;
        return {diameter, hight};
    }
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int, int> metrics = getdiameter(root);
        return metrics.first;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna