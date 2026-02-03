class Solution {
public:
    bool isTrionic(vector<int>& nums) {

        int n=nums.size();
        int i=0;
        int p=-1,q=-1,a=-1;
        while(i<n-1 && nums[i]<nums[i+1]){
         i++; 
         }
         p=i;
        if(p==0 || p== n-1){
            return false;
        }

        while(i<n-1 && nums[i]>nums[i+1]){
         i++; 
         }
         q=i;
        if(q==p || q== n-1){
            return false;
        }

        while(i<n-1 && nums[i]<nums[i+1]){
         i++; 
         }
         a=i;
        if( a != n-1){
            return false;
        }
        
    return true;
    }
};