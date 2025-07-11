class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> freq;

        int n=nums.size();
        for(int i=0;i<n;i++){
            int comp=target-nums[i];
            if(freq.find(comp)!=freq.end()){
             return {i,freq[comp]};
            }
                freq[nums[i]]=i;
        }
        return {};
    }
};