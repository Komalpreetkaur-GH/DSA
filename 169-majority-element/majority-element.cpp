class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x=nums.size();
        unordered_map<int,int> freq;
        for( int n: nums){
            freq[n]++;
            
            if(freq[n]>x/2){
                return n;
            }
        }
        return -1;
    }
};