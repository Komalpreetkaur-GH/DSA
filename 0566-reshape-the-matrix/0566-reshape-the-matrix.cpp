class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        
        // If reshape not possible
        if (m * n != r * c) return mat;
        
        vector<vector<int>> res(r, vector<int>(c));
        
        // Fill elements in row-wise order
        for (int i = 0; i < m * n; i++) {
            res[i / c][i % c] = mat[i / n][i % n];
        }
        
        return res;
    }
};
