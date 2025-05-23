class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n=s.size(),i=0,ans=0;
        while(i<n){
            if(i != n-1 && m[s[i]]<m[s[i+1]]){
                ans+=m[s[i+1]] - m[s[i]];
                i+=2;
            }else{
                ans+=m[s[i]];
                i++;
            }
        }
        return ans;
    }
};