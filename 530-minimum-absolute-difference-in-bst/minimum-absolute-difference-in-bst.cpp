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

    void inorder(TreeNode* root, vector<int> &res){
        if(!root){
            return ;
        }
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
        
    }
    int getMinimumDifference(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        vector<int> ans;
        inorder(root,ans);
        int mini=INT_MAX;

        for(int i=0;i<ans.size()-1;i++){
            
        mini=min(mini,ans[i+1]-ans[i]);

        }
        return mini;


    }
};