class Solution {
public:
    Node* getpred(Node* root, int key) {
        Node* current = root;
        Node* ans = nullptr;
        while (current) {
            if (current->data < key) {
                ans = current;
                current = current->right;
            } else {
                current = current->left;
            }
        }
        return ans;
    }

    Node* getsuc(Node* root, int key) {
        Node* current = root;
        Node* ans = nullptr;
        while (current) {
            if (current->data > key) {
                ans = current;
                current = current->left;
            } else {
                current = current->right;
            }
        }
        return ans;
    }

    vector<Node*> findPreSuc(Node* root, int key) {
        Node* pred = getpred(root, key);
        Node* succ = getsuc(root, key);
        return {pred, succ};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna