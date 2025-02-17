class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m;
        if(s.size()!=t.size()) return false;
        for(size_t i=0;i<s.size();i++){
            if(m.find(s[i])==m.end()) m[s[i]]=t[i];
            else{
                if(m[s[i]] != t[i]) return false;
            }
        }
        m.clear();
        for(size_t i=0;i<s.size();i++){
            if(m.find(t[i])==m.end()) m[t[i]]=s[i];
            else{
                if(m[t[i]] != s[i]) return false;
            }
        }
        return true;
    }
};