class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int size=nums.size();
        int n=size/2;
        vector<int>freq(50001,0);


        for(int i:nums){
            freq[i]++;
            if(freq[i]==n){
                return i;
            }

        }
       
        return -1;
    }
};