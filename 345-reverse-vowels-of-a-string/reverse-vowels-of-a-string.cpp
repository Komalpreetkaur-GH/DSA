class Solution {
public:
bool helper(char ch){
    char c=tolower(ch);
    char vowels[5]={'a','e','i','o','u'};
    for(int i=0;i<5;i++){
        if(c==vowels[i]){
            return true;
        }

    }
        return false;
}
    string reverseVowels(string s) {
        int size=s.size();
        int left=0;
        int right=size-1;
        while(left<right){
            while(left<right && !helper(s[left])){
                left++;
            }
            while(left<right && !helper(s[right])){
                right--;
            }
           
            swap(s[left],s[right]);
            
            left++;
            right--;
        }
        
        return s;
    }
};