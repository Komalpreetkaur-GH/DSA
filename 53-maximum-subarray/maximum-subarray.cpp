class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max1=nums[0];
        int n=nums.size();
        int res=nums[0];
        for(int i=1;i<n;i++){
            max1=max(nums[i],max1+nums[i]);
            res=max(max1,res);

        }
        return res;
    }
};