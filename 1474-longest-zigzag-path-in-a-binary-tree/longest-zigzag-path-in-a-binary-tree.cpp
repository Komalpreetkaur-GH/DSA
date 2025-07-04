class Solution {
public:
    int maxZigZag = 0;

    void dfs(TreeNode* node, int direction, int length) {
        if (!node) return;

        maxZigZag = max(maxZigZag, length);

        // direction: 0 = left, 1 = right
        if (direction == 0) {
            // Came from left, now go right
            dfs(node->right, 1, length + 1);
            dfs(node->left, 0, 1); // Restart if going same direction
        } else {
            // Came from right, now go left
            dfs(node->left, 0, length + 1);
            dfs(node->right, 1, 1); // Restart if going same direction
        }
    }

    int longestZigZag(TreeNode* root) {
        if (!root) return 0;
        dfs(root->left, 0, 1);  // Starting to the left
        dfs(root->right, 1, 1); // Starting to the right
        return maxZigZag;
    }
};
