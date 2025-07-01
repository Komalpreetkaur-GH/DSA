class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int y=x;
        int n=0;
        while(x){
            int r=x%10;
            if(n>INT_MAX/10|| n<INT_MIN/10){
                return false;
            }
            n=n*10+r;
            x/=10;
        }  
        return (y==n);      
    }
};