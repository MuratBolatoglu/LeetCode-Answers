class Solution {
public:
    bool isPalindrome(string s) {
       string check="";
       for(size_t i=0;i<s.size();i++){
        if(isalnum(s[i])) check+=tolower(s[i]);
       }
        int l=0,r=check.size()-1;
        while(l<r){
            if(check[r]!=check[l]) return false;
            l++;
            r--;
        }
        return true;
    }
};