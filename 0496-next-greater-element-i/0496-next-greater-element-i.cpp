class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int size=nums2.size();
        stack<int> nge;
        unordered_map<int,int> res;
      
        for(int i=size-1;i>=0;i--){
            while(!nge.empty() && nge.top()<nums2[i]){
                nge.pop();
            }
            if(nge.empty()){
                res[nums2[i]]=-1;
            }
            else{
            res[nums2[i]]=nge.top();
            }
            nge.push(nums2[i]);
        }
        vector<int>a;
        for(int n:nums1){
            a.push_back(res[n]);
        }
        return a;
    }
};