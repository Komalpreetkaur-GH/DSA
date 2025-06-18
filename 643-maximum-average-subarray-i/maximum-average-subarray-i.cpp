class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        double max1=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        max1=sum;
        for(int i=k;i<n;i++){
            sum=sum+nums[i]-nums[i-k];
           max1= max(sum,max1);
        }
        return max1/k;
    }
};