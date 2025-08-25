class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int size=prices.size();
        vector<int> res(size,0);
        stack <int> a;

        for(int i=size-1;i>=0;i--){
            while(!a.empty() && a.top()>prices[i]){
                a.pop();
            }
            if(a.empty()){
                res[i]=prices[i];
            }
            else{
            res[i]=prices[i]-a.top();
            }
            a.push(prices[i]);
        }
        return res;
    }
};