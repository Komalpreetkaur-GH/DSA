class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int>a;
        int n=nums.size();
        vector<bool>visited(n,false);
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                int left=max(0,i-k);
                int right=min(i+k,n-1);
                for(int j=left;j<=right;j++){
                    a.insert(j);

                }
            }
        }
     return vector<int>(a.begin(),a.end());   
    }
};