class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
    //    int count=0;
    //    int max=0;
    //     for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //        if(prices[j]-prices[i]>max){
    //         max=prices[j]-prices[i];
    //        }
    //     }
    //     }
    //     return max;
       


       int min_price=INT_MAX;
       int max_profit=0;
       for(int i=0;i<n;i++){
        if(prices[i]<min_price){
            min_price=prices[i];
        }
       
       else{
        int profit=prices[i]-min_price;
        if(max_profit<profit){
            max_profit=profit;
        }

       }
       }
    return max_profit;
    }
};