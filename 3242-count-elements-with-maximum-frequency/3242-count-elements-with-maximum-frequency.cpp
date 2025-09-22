class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        int maxi1=*max_element(nums.begin(),nums.end());
        vector<int>freq(maxi1+1,0);
        for(int n:nums){
            freq[n]++;
        }
        int count=0;
        int maxi2=*max_element(freq.begin(),freq.end());
        vector<int>res;
        for(int n:freq){
            if(n==maxi2){
                count++;
            }
        }
       
        
        return count*maxi2;
    }
};