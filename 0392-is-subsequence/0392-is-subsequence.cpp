class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sl=0;
        for(int i =0;i<t.size();i++){
            if(s[sl] == t[i]) sl++;
        }
        return sl==s.size();
    }
};