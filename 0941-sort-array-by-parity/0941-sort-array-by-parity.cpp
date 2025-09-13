class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        for(int i:nums){
            if(!(i&1)){
                res.push_back(i);
            }
        }
        for(int i:nums){
            if((i&1)){
                res.push_back(i);
            }

        }
        
       return res; 
    }
};