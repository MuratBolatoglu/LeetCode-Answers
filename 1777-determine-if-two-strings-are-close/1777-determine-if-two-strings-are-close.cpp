class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,pair<int,int>> m;
        vector<int> v1,v2;
        if(word1.size() != word2.size()) return false;
        for(size_t i=0;i<word1.size();i++){
            m[word1[i]].first++;
            m[word2[i]].second++;
        }
        for(auto& i : m){
            auto[first,second] =i.second;
            if ((first == 0 && second > 0) || (second == 0 && first > 0)) return false;
            v1.push_back(first);
            v2.push_back(second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2;
    }
};