class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int arrs[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int arrt[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(size_t i=0;i<s.size();i++){
            arrs[s[i]-'a']++;
        }
        for(size_t i=0;i<t.size();i++){
            arrt[t[i]-'a']++;
        }
        for(size_t i=0;i<26;i++){
            if(arrs[i]!=arrt[i]) return false;
        }
        return true;
    }
};
