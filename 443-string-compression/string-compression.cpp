class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        int n=chars.size();
        for(int i=0;i<n;){
            int count=0;
            char x=chars[i];
           int j=i;
          while(j<n && x==chars[j]){
            j++;
            count++;
          }
            chars[index++]=x;
            if(count>1){
                string c=to_string(count);
                for(char ch:c){
                    chars[index++]=ch;
                }


            }
            i=j;
            

        }
        return index;
        
    }
};