class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        unordered_map<char,int> m;
        for(size_t i=0;i<s1.size();i++){
            m[s1[i]]++;
        }
        int l=0,r=s1.size()-1;
        while(r<s2.size()){
            unordered_map<char,int> m2;
            for(size_t i=l;i<=r;i++){
            m2[s2[i]]++;
            }
            if(m2==m) return true;
            l++;
            r++;   
        }
        return false;
    }
};
