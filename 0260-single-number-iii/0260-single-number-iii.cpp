class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        map<int,int>freq;

        for(int i:nums){
            freq[i]++; 
        }
        vector<int> res;
        for(auto i: freq){
            if(i.second==1){
                res.push_back(i.first);
            }
        }
        return res;
    }
};