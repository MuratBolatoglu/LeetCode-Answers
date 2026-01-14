class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string> s;
        for(size_t i=0;i<words.size();i++){
            for(size_t j=0 ; j<words.size();j++){
                if(i==j) continue;
                if(words[j].find(words[i]) != string::npos) s.insert(words[i]);
            } 
        }
        vector<string> ans(s.begin(),s.end());
        return ans;
    }
};