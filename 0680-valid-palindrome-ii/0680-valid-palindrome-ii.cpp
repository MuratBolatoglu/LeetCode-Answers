class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r])  return (isPalindrome(s.substr(l+1,r-l))  || isPalindrome(s.substr(l,r-l)));
            l++;
            r--;
        }
        return true;
    }
    bool isPalindrome(string str) {
        string s;
        for(size_t i=0;i<str.size();i++){
            if(isalnum(str[i])) s+=tolower(str[i]);
        }
        int l=0,r=s.size()-1;
        while(l<r){
            if(s[r]!=s[l]) return false;
            l++;
            r--;
        }
        return true;
    }
};