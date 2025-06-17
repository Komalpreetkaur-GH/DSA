class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x=s.length();
        int y=t.length();

        int i=0;
        int j=0;
        while(i<x && j<y){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        if(i==x){
            return true;
        }
        else{
            return false;
        }

        
    }
};