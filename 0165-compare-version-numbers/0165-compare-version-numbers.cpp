class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream s1(version1);
        stringstream s2(version2);
        vector<int> one;
        vector<int>two;
        string ver1;
        string ver2;
        while(getline(s1,ver1,'.')){
            one.push_back(stoi(ver1));
        }
        while(getline(s2,ver2,'.')){
            two.push_back(stoi(ver2));
        }
        int  i=0;
        int n=max(one.size(),two.size());
        while(i<n){
            int a=(i<one.size())?one[i]:0;
            int b=(i<two.size())?two[i]:0;
            i++;
        if(a<b){
            return -1;
        }
        if(b<a){
            return 1;
        }
        }
        return 0;
    }
};