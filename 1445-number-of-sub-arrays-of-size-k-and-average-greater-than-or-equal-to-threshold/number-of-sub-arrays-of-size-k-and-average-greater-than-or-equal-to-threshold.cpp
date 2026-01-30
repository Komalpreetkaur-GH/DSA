class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {

        int n=arr.size();
        int sum=0;
        int count=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }

       

        for(int i=k;i<n;i++){
           if(sum/k >= t){
            count++;
        }
            sum+=arr[i]-arr[i-k];
        }

           if(sum/k >= t){
            count++;
        }

      return count;  
    }
};