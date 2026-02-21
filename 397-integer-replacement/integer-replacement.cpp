class Solution {
public:
    int integerReplacement(int n) {
        long long a=n;
        if(a==1){
            return 0;
        }

        int count=0;

        while(a>1){
            if(a%2==0){
                a=a/2;
            }
            else{
                if((a&2)==0 || a==3 ){
                    a=a-1;
                }
                else{
                    a=a+1;
                }
            }
            count++;
        }
       return count; 
    }
};