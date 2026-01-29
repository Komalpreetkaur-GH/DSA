class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        vector<int> res;
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                res.push_back(matrix[i][j]);
            }

        }

        int left=0;
        int size=res.size();
        int right=size-1;
        while(left<=right){
        int mid=left + (right-left)/2;
        if(res[mid]==target){
            return true;
        }
        else if(res[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }

        }
        return false;
        
    }
};