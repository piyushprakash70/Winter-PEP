class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;
        vector<int> v;
        ListNode* curr = head;
        while (curr) {
            v.push_back(curr->val);
            curr = curr->next;
        }
        for (int i = 0; i + k <= v.size(); i += k) {
            reverse(v.begin() + i, v.begin() + i + k);
        }
        curr = head;
        int idx = 0;
        while (curr) {
            curr->val = v[idx++];
            curr = curr->next;
        }

        return head;
    }
};
