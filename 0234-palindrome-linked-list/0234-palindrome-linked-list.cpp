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
    ListNode* reversell(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* temp=head;
        while(temp){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;

        }
        return prev;

    }
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return true;
        }
    //     stack<int> store;
       
    //    ListNode* temp=head;
    //    while(temp){
    //     store.push(temp->val);
    //     temp=temp->next;
    //    }
    //    temp=head;
    //    while(temp){
    //     if(store.top()!=temp->val){
    //         return false;
    //     }
    //     store.pop();
    //     temp=temp->next;
    //    }
    //     return true;



    // ************************************
    ListNode* fast=head;
    ListNode* slow=head;

    while(fast!=nullptr&& fast->next!=nullptr){
        fast=fast->next->next;
        slow=slow->next;
    }
    ListNode* newhead=reversell(slow);
    ListNode* firhead=head;
    ListNode* sechead=newhead;

    while(sechead){
        if(sechead->val!=firhead->val){
            reversell(newhead);
            return false;

        }
        sechead=sechead->next;
        firhead=firhead->next;

    }
    return true;

    }
};