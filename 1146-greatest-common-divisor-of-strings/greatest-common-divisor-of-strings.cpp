class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
            int a=str1.size();
            int b=str2.size();
        if(str1+str2!=str2+str1){
            return "";
        }
        else{
            while(b!=0){
                int r=a%b;
                a=b;
                b=r;
            }
        }
           return str1.substr(0,a);
        
    }
};