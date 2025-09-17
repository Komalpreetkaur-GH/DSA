class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i+1<r && grid[i][j] != grid[i + 1][j]){
                    return false;
                    }
                if(j+1<c && grid[i][j] == grid[i][j + 1]){
                    return false;
                }
            }
        }
        return true;
    }
};