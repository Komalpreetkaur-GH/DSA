class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
//         int count1=0;
//         int count2=0;

//         for(int i=0;i<n;i++){
//             if(nums[i]%2==0){
//                 count1++;
//             }
//             else{
//                 count2++;
//             }
//         }

// return count1+count2;

    int maxi=0;
    for(int i=0;i<n;i++){
    unordered_set<int>a;
    int even=0;
    int odd=0;

    for(int j=i;j<n;j++){
        if(a.find(nums[j])==a.end()){
            a.insert(nums[j]);
        
        if(nums[j]%2==0){
            even++;
        }
        else{
            odd++;
        }
        }
        if(even==odd){
            maxi=max(maxi,j-i+1);
        }

    }
    }
    return maxi;
        
    }
};