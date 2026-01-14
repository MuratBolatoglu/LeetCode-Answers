class Solution {
public:
    int countSeniors(vector<string>& d) {
        int ans=0;
        for(auto i : d){
            if(((i[11]-'0')*10 + (i[12]-'0')) > 60 ) ans++;
        }
        return ans;
    }
};