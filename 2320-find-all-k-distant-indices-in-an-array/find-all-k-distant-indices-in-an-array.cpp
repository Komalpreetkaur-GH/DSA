class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int>a;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                int left=max(0,i-k);
                int right=min(i+k,n-1);
                for(int i=left;i<=right;i++){
                    a.insert(i);

                }
            }
        }
     return vector<int>(a.begin(),a.end());   
    }
};