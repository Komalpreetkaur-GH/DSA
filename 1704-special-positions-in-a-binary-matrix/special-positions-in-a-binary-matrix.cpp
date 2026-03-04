class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        int count=0;

        vector<int>rowc(r,0);
        vector<int>colc(c,0);

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    rowc[i]++;
                    colc[j]++;

                }
            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1 && rowc[i]==1 && colc[j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};