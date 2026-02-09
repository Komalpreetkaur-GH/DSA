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

    void inorder(TreeNode* root, vector<int>& nums){
        if(!root){
            return;
        }
    inorder(root->left,nums);
    nums.push_back(root->val);
    inorder(root->right,nums);
    
    }

    TreeNode* build(vector<int> & nums,int l,int r){
        if(l>r){
            return nullptr;
        }

        int mid=(l+r)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=build(nums,l,mid-1);
        root->right= build(nums,mid+1,r);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> res;
        inorder(root,res);
       return  build(res,0,res.size()-1);
        
    }
};