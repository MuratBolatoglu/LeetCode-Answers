class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";
        char curr=chars[0];
        int group=1;
        for(size_t i=1;i<chars.size();i++){
            if(chars[i] != chars[i-1]){
                group==1 ? ans+=curr : ans+= curr + to_string(group);
                curr=chars[i];
                group=1;
            }else group++;
        }
        group==1 ? ans+=curr : ans+= curr + to_string(group);
        chars.clear();
        for(auto& i : ans) chars.push_back(i);
        return ans.size();
    }
};