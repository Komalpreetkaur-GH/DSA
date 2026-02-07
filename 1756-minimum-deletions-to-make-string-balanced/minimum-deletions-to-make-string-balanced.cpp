class Solution {
public:
    int minimumDeletions(string s) {
        int count=0;
        int del=0;

        for(char  ch: s){
            if(ch=='b'){
                count++;
            }

            else{
                del=min(del+1,count);
            }
        }
       return del; 
    }
};