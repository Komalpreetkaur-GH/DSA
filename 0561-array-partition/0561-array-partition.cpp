class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());   // Step 1: sort the array
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2) {  // Step 2: pick every 2nd element
            sum += nums[i];
        }
        return sum;
    }
};
