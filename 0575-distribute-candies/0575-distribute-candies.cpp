class Solution {
public:
    int distributeCandies(vector<int>& c) {
        int n=c.size();
        unordered_set <int> s(c.begin(),c.end());
        int mini=min<int>(s.size(),n/2);
        return mini;
        
    }
};