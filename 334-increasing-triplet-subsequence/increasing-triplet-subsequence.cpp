class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX;
        int sec=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
        if(first>=nums[i]){
            first=nums[i];
        }
        else if(sec>=nums[i]){
            sec=nums[i];

        }
        else{
            return true;
        }
        }
        
        return false;
    
    }
};