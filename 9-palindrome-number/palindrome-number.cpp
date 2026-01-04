class Solution {
public:
    bool isPalindrome(int x) {
        // Step 1: negative numbers or ending with 0 (except 0)
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reversedHalf = 0;

        // Step 2: reverse half of the number
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // Step 3: check palindrome
        return (x == reversedHalf) || (x == reversedHalf / 10);
    }
};
