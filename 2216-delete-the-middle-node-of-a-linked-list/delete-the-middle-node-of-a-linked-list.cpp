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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        int count=0;
        ListNode *m=head;
        while(m!=NULL){
            m=m->next;
            count++;
        }
        int n=count/2;

        ListNode* curr=head;
        int i=0;
        while(i<n-1){
            curr=curr->next;
            i++;
        }
      
       curr->next=curr->next->next;
        return head;
    }
};