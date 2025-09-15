class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> freq(26,false);
        for(char ch:brokenLetters){
            freq[ch-'a']=true;
        }
        int count=0;
        bool check=false;
        stringstream ss(text);
        string c;
        while(ss>>c){
         check=true;
            for(char ch:c){
                if(freq[ch-'a']){
                    check=false;
                    break;
                }
            }
           if(check) count++;
        }
        return count;
    }
};