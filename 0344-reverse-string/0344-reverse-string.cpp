class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int f=0;
        int l=n-1;
        while(f<l){
            swap(s[f],s[l]);
            f++;
            l--;
        }
       
    }
};