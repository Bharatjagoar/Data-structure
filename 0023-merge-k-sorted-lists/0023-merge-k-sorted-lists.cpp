/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Node {
    int data;
    int row;
    int col;
    Node(int i, int j, int data) {
        this->data = data;
        this->row = i;
        this->col = j;
    }
};
class compare {
public:
    bool operator()(ListNode* a, ListNode* b) { return a->val > b->val; }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& arr) {

        if (arr.size() == 0)
            return nullptr;
        priority_queue<ListNode*, vector<ListNode*>, compare> pq;

        for (ListNode* x : arr) {
            if (!x)
                continue;
            // cout<<x->val<<endl;
            pq.push(x);
        }
        if(pq.empty()) return nullptr;
        ListNode* head = pq.top();
        ListNode* traverse = head;
        pq.pop();
        if (head->next) {
            pq.push(head->next);
        }

        while (!pq.empty()) {
            ListNode* temp = pq.top();
            traverse->next = temp;
            traverse = temp;
            cout << temp->val << endl;
            if(temp->next) pq.push(temp->next);
            pq.pop();
        }

        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna