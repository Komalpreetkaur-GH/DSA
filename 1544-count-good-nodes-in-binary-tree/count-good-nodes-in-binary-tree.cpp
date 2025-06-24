/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int helper(TreeNode* root,int maxi){
    if(!root){
        return 0;

    }
    int good=0;
    if(root->val>=maxi){
        good=1;
    }
maxi=max(maxi,root->val);
    good+=helper(root->left,maxi);
    good+=helper(root->right,maxi);
    return good;

}
    int goodNodes(TreeNode* root) {
        return helper(root,root->val);
        
    }
};