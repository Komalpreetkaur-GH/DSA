class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        int x=-1;

       for(auto d: freq){
        if(d.first==d.second){
            x=max(x,d.first);
        }
       }
        return x;
    }
};