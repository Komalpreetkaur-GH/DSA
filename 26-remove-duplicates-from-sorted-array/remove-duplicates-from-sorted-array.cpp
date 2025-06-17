class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int first=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[first]!=nums[i]){
                first++;
                nums[first]=nums[i];
            }
        }
        return first+1;
    }
};