class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, int> prefixSumCount;
        prefixSumCount[0] = 1;  // base case: one path that starts from root with sum 0
        return dfs(root, 0, targetSum, prefixSumCount);
    }

    int dfs(TreeNode* node, long long currSum, int target, unordered_map<long long, int>& prefixSumCount) {
        if (!node) return 0;

        currSum += node->val;
        int paths = prefixSumCount[currSum - target];

        prefixSumCount[currSum]++;

        paths += dfs(node->left, currSum, target, prefixSumCount);
        paths += dfs(node->right, currSum, target, prefixSumCount);

        prefixSumCount[currSum]--;  // backtrack

        return paths;
    }
};
