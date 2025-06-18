class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>res(n+1,0);
        res[0]=0;
        for(int i=1;i<=n;i++){
            res[i]=res[i-1]+gain[i-1];
        }
        int max=0;
        for(int i=0;i<=n;i++){
            if(res[i]>max){
                max=res[i];
            }
        }
       return max; 
    }
};