class Solution {
public:
    int maxVowels(string a, int k) {

    int n=a.size();
    int maxv=0;
    int count=0;

    for(int i=0;i<k;i++){
         if(a[i]=='a' || a[i]== 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
                count++;
            } 
    
    }
    maxv=count;


    for(int i=k;i<n;i++)
    {  
    if(a[i]=='a' || a[i]== 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
        count++;
            }
    if(a[i-k]=='a' || a[i-k]== 'e' || a[i-k] == 'i' || a[i-k] == 'o' || a[i-k] == 'u'){
        count--;
            }
 maxv=max(maxv,count);

        }
      return maxv;  
        
    }
};