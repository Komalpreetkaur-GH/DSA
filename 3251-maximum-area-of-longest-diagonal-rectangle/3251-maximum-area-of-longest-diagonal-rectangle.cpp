class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int x=dimensions.size();
        int maxdia=0;
        int maxarea=0;
    
        for(int i=0;i<x;i++){
            int l=dimensions[i][0];
            int b=dimensions[i][1];
            int d=l*l+b*b;
            int a=l*b;
            if(d>maxdia){
                maxdia=d;
                maxarea=a;

            }
            if(d==maxdia && maxarea<a){
                maxarea=a;
            }
         
        }
        return maxarea;
    }
};