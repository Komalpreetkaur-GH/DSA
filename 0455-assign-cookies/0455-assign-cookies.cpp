class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int i = 0, j = 0;  // i -> children, j -> cookies
        
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {  
                // Cookie can satisfy child
                i++;
                j++;
            } else {
                // Cookie too small, try next cookie
                j++;
            }
        }
        return i;  // number of satisfied children
    }
};
