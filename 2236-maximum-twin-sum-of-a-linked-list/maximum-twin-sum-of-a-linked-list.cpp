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
    int pairSum(ListNode* head) {
        ListNode* curr=head;
        ListNode* x=head;
        
        int count=0;
        while(curr!=nullptr){
            count++;
            curr=curr->next;
        }

        vector<int>a;
        while(x!=nullptr){
            a.push_back(x->val);
            x=x->next;
        }
        int left=0;
        int right=count-1;
        int maxsum=0;
        for(int n:a){
            int sum=a[left++]+a[right--];
            maxsum=max(sum,maxsum);
            

        }
return maxsum;
        
    }
};