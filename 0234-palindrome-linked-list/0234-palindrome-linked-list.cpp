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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return true;
        }
        stack<int> store;
       
       ListNode* temp=head;
       while(temp){
        store.push(temp->val);
        temp=temp->next;
       }
       temp=head;
       while(temp){
        if(store.top()!=temp->val){
            return false;
        }
        store.pop();
        temp=temp->next;
       }
        return true;
    }
};