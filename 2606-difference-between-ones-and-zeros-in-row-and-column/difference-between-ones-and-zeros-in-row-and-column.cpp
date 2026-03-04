class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>> diff(r,vector<int>(c,0));
        vector<int>onerows(r,0);
        vector<int> onecols(c,0);

        vector<int>zerorows(r,0);
        vector<int>zerocols(c,0);

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    onerows[i]++;
                    onecols[j]++;
                }
                else{
                    zerorows[i]++;
                    zerocols[j]++;
                }
            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                diff[i][j]=onerows[i] + onecols[j] - zerorows[i]- zerocols[j];

            }
        }

        return diff;
        
    }
};