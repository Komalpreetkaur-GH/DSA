class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int,int> freq;

        int n=nums.size();
        
      for(int x:nums){
        freq[x]++;
        // if(freq[x]>n/2){
        //     return x;
        // }
      }

      for(auto& x: freq){
        if(x.second>n/2){
            return x.first;
        }
      }
      return -1;  
    }
};