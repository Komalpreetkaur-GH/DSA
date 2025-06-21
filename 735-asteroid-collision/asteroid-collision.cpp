class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int>st;
      for(int n:asteroids){

            bool destroyed=false;
     while(!st.empty() && n<0 && st.top()>0){
           if(st.top()<-n){
                    st.pop();
           }
                
               else if(st.top()==-n){
                    st.pop();
                    destroyed=true;
                    break;

                }
                else{
                    destroyed=true;
                    break;
                }
                
            


        }
            if(!destroyed){
                st.push(n);
            }
      
      
      }
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};