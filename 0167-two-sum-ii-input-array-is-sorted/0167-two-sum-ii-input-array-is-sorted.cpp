class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int n=numbers.size();
        unordered_map<int,int> res;
        for(int i=0;i<n;i++){
            int comp=target-numbers[i];
            if(res.find(comp)!=res.end()){
                return {res[comp],i+1};
            }
            res[numbers[i]]=i+1;
        }
       return {}; 

    }
};