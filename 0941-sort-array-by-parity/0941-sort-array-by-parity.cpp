class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
    //     vector<int> res;
    //     for(int i:nums){
    //         if(!(i&1)){
    //             res.push_back(i);
    //         }
    //     }
    //     for(int i:nums){
    //         if((i&1)){
    //             res.push_back(i);
    //         }

    //     }
        
    //    return res; 
    int left=0;
    int right=n-1;
    while(left<right){
        if(nums[left]%2==1 && nums[right]%2==0){
            swap(nums[left],nums[right]);
        }
    if(!(nums[left]&1))left++;
    if((nums[right]&1))right--;
    }
    return nums;
    }
};