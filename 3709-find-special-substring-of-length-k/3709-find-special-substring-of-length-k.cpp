class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        if(s.size()==1) return true;
        int count=1;
        for(size_t i=1;i<=s.size();i++){
            if(s[i-1]==s[i]) count++;
            else{
                if(count==k) return true;
                count=1;
            }    
        }
        return false;
    }
};