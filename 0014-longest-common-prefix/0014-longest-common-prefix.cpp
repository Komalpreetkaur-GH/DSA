class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Traverse character by character
        for (int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];  // Character to compare with

            // Compare with all other strings
            for (int j = 1; j < strs.size(); j++) {
                // If index out of range or mismatch
                if (i >= strs[j].size() || strs[j][i] != ch) {
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0];  // All characters matched
    }
};
