class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int maxVowels(string s, int k) {
        int maxCount = 0, count = 0;
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            // Add current character if it's a vowel
            if (isVowel(s[i])) count++;

            // Remove the character left behind as window slides
            if (i >= k && isVowel(s[i - k])) count--;

            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};
