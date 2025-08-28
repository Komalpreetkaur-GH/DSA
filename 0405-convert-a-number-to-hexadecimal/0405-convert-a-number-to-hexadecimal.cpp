class Solution {
public:
    string toHex(int num) {
        if(num==0){
            return "0";
        }
        unsigned int n=num;
        string hex="";
        string main="0123456789abcdef";
        while(n!=0){
            int r=n%16;
            hex=main[r]+hex;
            n/=16;
        }
        return hex;
    }
};