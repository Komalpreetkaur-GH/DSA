class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        
        unordered_map<int,int>freq;
        unordered_set<int>set;
        for(int n:arr){
            freq[n]++;
        }
        for(auto& n:freq){
           
            if(set.count(n.second)){
                return false;
            }
            set.insert(n.second);
        }
        return true;
    }
};