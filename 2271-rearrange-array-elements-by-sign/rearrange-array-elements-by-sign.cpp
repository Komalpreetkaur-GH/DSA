class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector <int>a,b,res;
        for(int x:nums){
            if(x<0){
                a.push_back(x);
            }
            else{
                b.push_back(x);
            }
        }
       for(int i=0;i<b.size();i++){
        res.push_back(b[i]);
        res.push_back(a[i]);

       }
        return res;
        
    }
};