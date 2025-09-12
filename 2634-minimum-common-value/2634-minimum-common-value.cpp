class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set s(nums1.begin(),nums1.end());
        int p=INT_MAX;
        for(int n:nums2){
            if(s.count(n)){
                p=min(p,n);
            }
        }
       return p==INT_MAX?-1: p;
    }
};