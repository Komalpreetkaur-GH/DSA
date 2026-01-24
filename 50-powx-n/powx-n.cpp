class Solution {
public:
    double myPow(double x, int n) {

        double res=1;
        long long a=n;
        if(a<0){
            x=1/x;
            a*=-1;
        }

        while(a>0){
            if(a%2==1){
                res*=x;
            }
            x*=x;
            a>>=1;
        }
        return res;
        
    }
};