class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int index=0;
        while(index<strs[0].size()){
            for(size_t i=1;i<strs.size();i++){
                if(strs[i][index] != strs[0][index]) return ans;
            }
            ans+=strs[0][index];
            index++;
        }
        return ans;
    }
};