class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string res;
        string word;
        stack<string> st;
        while(ss>>word){
            st.push(word);
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
            if(!st.empty()){
                res+=" ";
            }
        }
        return res;
        
    }
};