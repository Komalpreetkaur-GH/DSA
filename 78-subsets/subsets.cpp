class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res={{}};

        for(int n: nums){
            int s=res.size();

        for(int i=0;i<s;i++){
            vector<int> inner=res[i];
            inner.push_back(n);
            res.push_back(inner);
        }
        }
        return res;

    }
};