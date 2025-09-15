class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<bool> freq(128,false);
        for(char ch:jewels){
            freq[ch]=true;

        }
        int count=0;
        for(char ch:stones){
            if(freq[ch]){
                count++;
            }
        }
        return count;
    }
};