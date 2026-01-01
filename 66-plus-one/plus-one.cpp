class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();

        // Traverse from the last digit
        for (int i = size - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
        }

        // If all digits were 9
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
