class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int index=0;
        string res="";
        for(int i=n;i>=0;i--){
            if(num[i]&1){
                break;
            }
            index=i;
        }
        for(int i=0;i<index;i++){
            res.push_back(num[i]);
        }
        return res;
    }
};