class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> freq;
        vector<int>res;
        int n=nums.size();
     
        for(int x:nums){
            freq[x]=true;
        }

       for(int i=1;i<=n;i++){
        if(freq.find(i)==freq.end()){
            res.push_back(i);

        }

       }

       return res; 
        
    }
};