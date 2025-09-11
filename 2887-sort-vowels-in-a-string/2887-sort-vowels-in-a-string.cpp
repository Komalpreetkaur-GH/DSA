class Solution {
public:
static bool isVowel(char ch) {
    static string vowels = "aeiouAEIOU";
    return vowels.find(ch) != string::npos;
}
    string sortVowels(string s) {
        vector<char> vow;
        int n=s.size();
        for(char ch:s){
            if(isVowel(ch)){
                vow.push_back(ch);
            }
        }
        int k=0;
        sort(vow.begin(),vow.end());
        for(int i=0;i<n;i++){
             if(isVowel(s[i])){
                s[i]=vow[k++];



            }
        }
        return s;
    }
};