class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // int size=candies.size();
        // vector <bool>res(size,true);
        
        // for(int i=0;i<size;i++){
          
        //     for(int j=0;j<size;j++){
        //     if(candies[i]+extraCandies<candies[j]){
        //         res[i]=false;
        //         break;
            
        //     }
       
           
        // }
        // }
        // return res;


        // ***************************************************************************************
        int size=candies.size();
        vector <bool>res;
        int max=*max_element(candies.begin(),candies.end());
        for(int i=0;i<size;i++){
            
                res.push_back(candies[i]+extraCandies>=max);
            
        }
        return res;
    }
    
};