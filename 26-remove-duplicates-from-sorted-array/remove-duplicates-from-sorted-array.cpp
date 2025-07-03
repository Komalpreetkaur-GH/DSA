class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        nums.clear();
        for(int val:s){
            nums.push_back(val);
        }
        return nums.size();
    }
};