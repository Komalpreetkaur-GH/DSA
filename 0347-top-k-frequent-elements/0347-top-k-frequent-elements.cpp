class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
    vector<pair<int,int>>req(freq.begin(),freq.end());
    sort(req.begin(),req.end(),[](auto& a,auto& b){
        return a.second>b.second;
    });

    vector<int> res;
    for(int i=0;i<k;i++){
        res.push_back(req[i].first);
    }
    return res;
    }
};