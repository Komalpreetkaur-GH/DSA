class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(n+1,0);
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<=n;i++){
           if(freq[i]==0){
            return i;
           }
        }
        return -1;
    }
};