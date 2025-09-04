class Solution {
public:
    int findClosest(int x, int y, int z) {
        int minx=0;
        int miny=0;
        if(x<z){
            minx=z-x;
        }
        else{
            minx=x-z;
        }
        if(y<z){
            miny=z-y;
        }
        else{
            miny=y-z;
        }
        if(minx<miny){
            return 1;
        }
        else if(minx==miny){
            return 0;
        }
        return 2;
        
    }
};