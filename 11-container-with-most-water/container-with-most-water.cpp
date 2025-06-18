class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int l=0;
        int b=0;
        int  maxarea=0;
        while(left<right){
            l=min(height[left],height[right]);
            b=right-left;
           int  area=l*b;
            maxarea=max(maxarea,area);
          
        
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
        }
        return maxarea;
        
    }
};