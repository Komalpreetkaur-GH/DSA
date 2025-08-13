class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> res;
        for(string i:strs){
            string x=i;
            sort(x.begin(),x.end());
            res[x].push_back(i);
        }
        vector<vector<string>>r;
        for(auto &i:res){
            r.push_back(i.second);
        }

    return  r;
        
    }
};