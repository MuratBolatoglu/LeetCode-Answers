class Solution {
public:
    int hIndex(vector<int>& cit) {
        int ans;
        sort(cit.begin(),cit.end(),greater<int>());
        for(size_t i=0;i<cit.size();i++){
            if(i<cit[i]) ans=i+1;
            else break;         
        }
        return ans;
    }
};