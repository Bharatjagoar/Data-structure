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
    TreeNode* createbst(vector<int>& arr, int start, int end) {
        if (start == end) {
            return new TreeNode(arr[start]);
        }
        if (start > end) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(arr[start]);
        int i = start + 1;
        int threshold = arr[start];
        while (i <= end) {
            if (threshold < arr[i]) {
                cout << "helo" << endl;
                break;
            }
            i++;
        }
        TreeNode* left = nullptr;
        TreeNode* right = nullptr;
        // left subtree
        if (start + 1 < i)
            left = createbst(arr, start + 1, i - 1);

        // right subtree
        right = createbst(arr, i, end);
        root->left = left;
        root->right = right;
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& arr) {
        int size = arr.size() - 1;

        return createbst(arr, 0, size);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna