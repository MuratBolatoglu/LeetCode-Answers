class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        for(size_t i=0;i<s.size()-1;i++){
            ans+=abs(s[i]-s[i+1]);
        }
        return ans;
    }
};