class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        // map<int,int>freq;

        // for(int i:nums){
        //     freq[i]++; 
        // }
        // vector<int> res;
        // for(auto i: freq){
        //     if(i.second==1){
        //         res.push_back(i.first);
        //     }
        // }
        // return res;
        //METHOD II
        vector<int>res;
        int sum=0;
      for(int n:nums){
        sum^=n;

      }
      int diffbit=sum& (int)(-(unsigned int)sum);
        int a=0;
        int b=0;
      for(int i:nums){
        if(diffbit&i){
            a^=i;
        }
        else{
            b^=i;
        }
      }
      return {a,b};
    }
};