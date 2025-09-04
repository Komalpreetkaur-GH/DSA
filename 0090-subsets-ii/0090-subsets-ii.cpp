class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        int tot=1<<n;
        sort(nums.begin(),nums.end());
        set<vector<int>> res;
        for(int i=0;i<tot;i++){
            vector<int>minres;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    minres.push_back(nums[j]);
                }
            }
            
            res.insert(minres);
        }
      return vector<vector<int>>(res.begin(),res.end());  
    }
};