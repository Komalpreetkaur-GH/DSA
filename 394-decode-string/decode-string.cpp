class Solution {
public:
    string decodeString(string s) {
        stack<int>count;
        stack<string>charac;
        int num=0;
        string str="";


        for(char ch:s){
            if(isdigit(ch)){
                num=num*10+(ch-'0');

            }
            else if(ch=='['){
                count.push(num);
                charac.push(str);
                num=0;
                str="";
            }
            else if(ch==']'){
                int x=count.top();
                string y=charac.top();
                count.pop();
                charac.pop();
                string m;
                while(x--){
                    m+=str;

                }
                str=y+m;
            }
            else{
                str+=ch;
            }
            
        }
        //  reverse(str.begin(),str.end());
         return str;
    }
};