class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      
      
        vector<int>res(m+n,0);
        
        for(int i=0;i<m;i++){
            res[i]=nums1[i];
        }
        for(int i=0;i<n;i++){
            res[m+i]=nums2[i];
        }
        sort(res.begin(),res.end());
        for(int i=0;i<m+n;i++){
            nums1[i]=res[i];
        }
        
    }
};