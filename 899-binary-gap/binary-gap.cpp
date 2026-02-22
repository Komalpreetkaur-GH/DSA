class Solution {
public:
    string b="";
    void tobinary(int n){
        while(n){
           b= char((n%2) + '0') + b;
           n/=2;

        }
    }
    int binaryGap(int n) {
        tobinary(n);
        int size=b.size();
        int prev=-1;
        int maxdis=0;
        for(int i=0;i<size;i++){
            if(b[i]=='1'){
                if(prev!=-1){
                    maxdis=max(maxdis,i-prev);
                }
            prev=i;
            }

        }

        
return maxdis;
        
    }
};