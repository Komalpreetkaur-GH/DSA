class Solution {
public:
    int maxFreqSum(string s) {
     unordered_map <char,int> freq;
     for(char ch:s){
        if(ch=='a'||ch=='e'|| ch=='i'|| ch=='o'||ch=='u'){
            freq[ch]++;
        }
     }
     int maxvow=0;

     for(auto & i:freq){
        maxvow=max(maxvow,i.second);
     }
     freq.clear();
     for(char ch:s){
        if(ch!='a'&&ch!='e' && ch!='i'&& ch!='o'&& ch!='u'){
            freq[ch]++;
        }
     }
     int maxconst=0;

     for(auto & i:freq){
        maxconst=max(maxconst,i.second);
     }
       return maxvow+maxconst; 
    }
};