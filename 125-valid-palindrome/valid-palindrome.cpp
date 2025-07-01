class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>a,b;
        if(s==" "){
            return true;
        }
        for(char ch:s){
            if(isalnum(ch)){
                ch=tolower(ch);
            a.push_back(ch);
            b.push_back(ch);
            }
        }

        reverse(b.begin(),b.end());
        return (a==b);
        
    }
};