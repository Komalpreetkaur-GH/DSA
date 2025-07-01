class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>a;
        if(s==" "){
            return true;
        }
        for(char ch:s){
            if(isalnum(ch)){
                ch=tolower(ch);
            a.push_back(ch);
           
            }
        }
    int left=0;
    int right=a.size()-1;
       while(left<right){
        if(a[left]!=a[right]){
            return false;}
            left++;
            right--;
        
       }
        return true;;
        
    }
};