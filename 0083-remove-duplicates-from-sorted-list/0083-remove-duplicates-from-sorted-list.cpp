class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;  // empty list check

        ListNode* current = head;
        while (current && current->next) {
            if (current->val == current->next->val) {
                // skip duplicate
                current->next = current->next->next;
            } else {
                // move forward
                current = current->next;
            }
        }
        return head;
    }
};
