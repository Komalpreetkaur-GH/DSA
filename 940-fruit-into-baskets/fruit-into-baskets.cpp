class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int size=fruits.size();
       unordered_map<int,int> mapp;
       int left=0;
       int maxi=0;

for(int right=0; right<size;right++){
    mapp[fruits[right]]++;

    while(mapp.size()>2){
        mapp[fruits[left]]--;
    if(mapp[fruits[left]]==0){
        mapp.erase(fruits[left]);
    }
    left++;
    }

    maxi=max(maxi,right-left+1);

}
    
  return maxi;      
    }
};