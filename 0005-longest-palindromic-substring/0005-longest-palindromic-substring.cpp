class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        
        for (int i = 0; i < s.size(); i++) {
            // Odd
            int l = i - 1, r = i + 1;
            string temp;
            temp += s[i];
            
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                temp = s[l] + temp + s[r];
                l--;
                r++;
            }
            if (temp.size() > ans.size()) ans = temp;
            
            // Even
            l = i, r = i + 1;
            temp = "";
            
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                temp = s[l] + temp + s[r];
                l--;
                r++;
            }
            if (temp.size() > ans.size()) ans = temp;
        }
        
        return ans;
    }
};
