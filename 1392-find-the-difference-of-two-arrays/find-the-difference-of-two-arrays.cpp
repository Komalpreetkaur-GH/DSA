class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());
        vector<int>v1,v2;
        for(int n: set1){
            if(set2.find(n)==set2.end()){
                v1.push_back(n);

            }
        }
        for(int n: set2){
            if(set1.find(n)==set1.end()){
                v2.push_back(n);

            }
        }
      return {v1,v2};  
    }
};