class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // map<int,int> freq;
        // for(int n:nums){
        //     freq[n]++;
        // }
        // for(auto i: freq){
        //     if(i.second==1){
        //         return i.first;
        //     }
        // }
        // return -1;


        //METHOD II
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i=i+3){
            if(nums[i]!=nums[i-1]){
                return nums[i-1];
            }
        }
        return nums[n-1];
    }
};