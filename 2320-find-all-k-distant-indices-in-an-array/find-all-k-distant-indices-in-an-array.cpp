class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        // set<int>a;
        int n=nums.size();
        vector<bool>visited(n,false);
        vector<int>res;
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                int left=max(0,i-k);
                int right=min(i+k,n-1);
                for(int j=left;j<=right;j++){
                    visited[j]=true;
                    // a.insert(j);

                }
            }
        }
        for(int i=0;i<n;i++){
            if(visited[i]){
                res.push_back(i);
            }
        }
     return res;
    }
};