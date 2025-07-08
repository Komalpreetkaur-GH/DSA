class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
int n=nums.size();
map<int,int> res;
for(int i=0;i<n;i++){
    int c=target-nums[i];
    if(res.find(c)!=res.end()){
        return {i,res[c]};
    }
    res[nums[i]]=i;
}
return {};
}
};