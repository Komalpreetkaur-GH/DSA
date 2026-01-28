class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int size=letters.size();
    //     int left=0;
    //     int right=size-1;

    //     int mid=-1;

    //     while(left<=right){
    //         mid=left+(right-left)/2;

    //         if(letters[mid]>target){
    //             right=mid-1;  
    //         }
    //         else{
    //             left=mid+1;
    //         }
    //     }
    //    return left; 

    for(int i=0;i<size;i++){
        if(letters[i]>target){
            return letters[i];
        }
    }
    return letters[0];
    }
};