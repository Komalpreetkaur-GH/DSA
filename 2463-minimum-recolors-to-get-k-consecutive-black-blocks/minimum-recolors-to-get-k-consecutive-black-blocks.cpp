class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int count=0;
        int mincount=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W'){
                count++;
            }
        }
        mincount=count;

        for(int i=k;i<n;i++){
            if(blocks[i]=='W'){
                count++;
            }
            if(blocks[i-k]=='W'){
                count--;
            }

            mincount=min(mincount,count);
        }




    return mincount;
    }
};