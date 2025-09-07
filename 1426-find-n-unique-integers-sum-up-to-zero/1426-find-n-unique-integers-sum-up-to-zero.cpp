class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        
        // Add pairs (-i, i)
        for (int i = 1; i <= n / 2; i++) {
            res.push_back(-i);
            res.push_back(i);
        }
        
        // If n is odd, add 0
        if (n % 2 == 1) {
            res.push_back(0);
        }
        
        return res;
    }
};
