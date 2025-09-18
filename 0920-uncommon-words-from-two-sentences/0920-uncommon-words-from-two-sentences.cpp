class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> freq;
        stringstream x(s1);
        string a;
        while(x>>a){
            freq[a]++;
        }
        stringstream y(s2);
         string b;
        while(y>>b){
            freq[b]++;
        }
    vector<string>res;
    for(auto &z:freq){
        if(z.second==1){
            res.push_back(z.first);
        }
    }

    return res;    
    }
};