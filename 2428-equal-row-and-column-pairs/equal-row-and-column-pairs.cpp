class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        map<vector<int>, int> rowMap;

        // Count frequency of each row
        for (int i = 0; i < n; ++i) {
            rowMap[grid[i]]++;
        }

        int count = 0;

        // For each column
        for (int col = 0; col < n; ++col) {
            vector<int> column;
            for (int row = 0; row < n; ++row) {
                column.push_back(grid[row][col]);
            }
            count += rowMap[column];  // Add if column matches any row
        }

        return count;
    }
};
