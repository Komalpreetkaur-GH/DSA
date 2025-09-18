class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> freq1,freq2;
        int n=words1.size();
        for(int i=0;i<n;i++){

            freq1[words1[i]]++;
        }
        
        int m=words2.size();
        for(int i=0;i<m;i++){

            freq2[words2[i]]++;
        }
        
      int count=0;
        for(auto &x: freq1){
            if(x.second==1 && freq2[x.first]==1 ){
            count++;
            }

        }
        return count;
    }
};