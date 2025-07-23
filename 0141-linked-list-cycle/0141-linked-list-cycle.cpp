/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        int count=0;
        map<ListNode*,int>freq;
        while(temp!=nullptr){
            if(freq.find(temp)!=freq.end()){
                return true;
                
            }
            freq[temp]=count;
            temp=temp->next;
            count++;
        }
      return false;  
    }
};