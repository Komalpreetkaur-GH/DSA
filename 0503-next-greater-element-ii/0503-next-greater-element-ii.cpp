class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();

        stack<int> res;
        vector<int> a(n,-1);
        for(int i=0;i<2*n;i++){
            int num=nums[i%n];
            while(!res.empty() && nums[res.top()]<num){
                a[res.top()]=num;
                res.pop();

            }
            if(i<n){
                res.push(i);
            }
        }
        
      return a;  
    }
};