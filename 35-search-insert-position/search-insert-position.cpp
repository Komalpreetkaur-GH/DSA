class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int size=nums.size();
        int left=0;
        int right=size-1;
        int mid=0;
        while(left<=right){
            mid=left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
            left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return left;
        
    }
};