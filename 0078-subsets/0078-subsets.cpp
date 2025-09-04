class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int tot=1<<n;
        vector<vector<int>> res;
        for(int i=0;i<tot;i++){
            vector<int>minres;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    minres.push_back(nums[j]);
                }
            }
                res.push_back(minres);

        }

     return res;   
    }
};