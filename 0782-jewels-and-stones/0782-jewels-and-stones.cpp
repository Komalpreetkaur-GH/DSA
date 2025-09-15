class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int> freq;
        for(char ch:jewels){
            freq[ch]++;

        }
        int count=0;
        for(char ch:stones){
            if(freq[ch]>0){
                count++;
            }
        }
        return count;
    }
};