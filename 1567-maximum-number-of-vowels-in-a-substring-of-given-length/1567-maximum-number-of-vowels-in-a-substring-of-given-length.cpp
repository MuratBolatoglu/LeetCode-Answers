class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0,right=k-1,vowel=0;
        string temp=s.substr(0,k);
        for(auto& i:temp) if(i=='a' || i=='e' ||i=='i' ||i=='o' ||i=='u') vowel++;
        int ans=vowel;
        while(right<s.size()){
            if(s[left]=='a' || s[left]=='e' ||s[left]=='i' ||s[left]=='o' ||s[left]=='u') vowel--;
            left++;
            right++;
            if(s[right]=='a' || s[right]=='e' ||s[right]=='i' ||s[right]=='o' ||s[right]=='u') vowel++;
            ans=max(ans,vowel);
        }
        return ans;
    }
};