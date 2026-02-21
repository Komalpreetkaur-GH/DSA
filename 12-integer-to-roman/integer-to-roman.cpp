class Solution {
public:
    string intToRoman(int num) {

        string res="";
        vector<int> numbers={1000,900,500,400,100,90,50,40,10,9,5,4,1};

        vector<string> romans={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        for(int i=0;i<numbers.size();i++){

            while(num>=numbers[i]){
                num-=numbers[i];
                res+=romans[i];
            }
        }
        return res;
    }
};