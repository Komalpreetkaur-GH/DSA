class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y;   // XOR -> 1 where bits differ
        int count = 0;
        while (n) {
            count += (n & 1); // check last bit
            n >>= 1;          // shift right
        }
        return count;
    }
};
