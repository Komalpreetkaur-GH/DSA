class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1=word1.size();
        int len2=word2.size();
        string res(len1+len2,' ');
        int i=0;
        int j=0;
        int k=0;
        while(i<len1||j<len2){
            if(i<len1){
                res[k++]=word1[i++];
            }
            if(j<len2){
                res[k++]=word2[j++];
            }
        }
        return res;
    }
};