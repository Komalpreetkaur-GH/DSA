class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size=temperatures.size();
        stack<int> temp;
        vector<int>res(size,0);
        for(int i=size-1;i>=0;i--){
        while(!temp.empty() && temperatures[temp.top()]<=temperatures[i]){
            temp.pop();
        }
        if(temp.empty()){
            res[i]=0;
        }
        else{
            res[i]=temp.top()-i;
        }
        temp.push(i);

        }
       return res; 
    }
};