class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        
        // Step 1: count frequencies
        for(int n : nums){
            freq[n]++;
        }

        int longest = 0;

        // Step 2: check pairs
        for(auto &p : freq){
            int num = p.first;
            if(freq.find(num+1) != freq.end()){
                longest = max(longest, p.second + freq[num+1]);
            }
        }

        return longest;
    }
};
