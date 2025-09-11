class Solution {
public:
    string sortVowels(string s) {
        vector<char> vow;
        int n=s.size();
        for(char ch:s){
            if(ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' ||
            ch=='I' || ch=='O' || ch=='U'
            ){
                vow.push_back(ch);
            }
        }
        int k=0;
        sort(vow.begin(),vow.end());
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i] =='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' ||
            s[i]=='I' || s[i]=='O' || s[i]=='U'
            ){
                s[i]=vow[k++];



            }
        }
        return s;
    }
};