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
    int maxLevelSum(TreeNode* root) {
        if(!root){
            return 0;
        }
    queue<TreeNode*> q;
    int maxsum=INT_MIN;
    int maxlevel=1;
    int currentlevel=1;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        int levelsum=0;
    for(int i=0;i<size;i++){
       TreeNode* a= q.front();
        levelsum+=a->val;
        q.pop();
        if(a->left){
            q.push(a->left);

        }
        if(a->right){
            q.push(a->right);
        }
    }
   if(levelsum>maxsum){
    maxsum=levelsum;
    maxlevel=currentlevel;
   }
   currentlevel++;

    }
      return maxlevel;  
    }
};