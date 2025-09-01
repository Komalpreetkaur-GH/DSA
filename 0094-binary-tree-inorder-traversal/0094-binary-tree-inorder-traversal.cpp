class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr || !st.empty()) {
            // 1) Reach the leftmost node
            while (curr) {
                st.push(curr);
                curr = curr->left;
            }

            // 2) Process top node
            curr = st.top(); 
            st.pop();
            res.push_back(curr->val);

            // 3) Visit right subtree
            curr = curr->right;
        }

        return res;
    }
};
