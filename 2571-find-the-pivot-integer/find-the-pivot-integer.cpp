class Solution {
public:
    int pivotInteger(int n) {
        int sum=(n * (n+1))/2;

        int a=sqrt(sum);

        if(a*a==sum){
            return a;
        }
        return -1;

        
    }
};