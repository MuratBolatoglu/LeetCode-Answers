class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& tri, vector<int>& t) {
        unordered_set<int> s;
        for(size_t i = 0; i < tri.size(); i++) {
            if(tri[i][0] <= t[0] && tri[i][1] <= t[1] && tri[i][2] <= t[2]) {
                for(size_t j=0;j<3;j++){
                    if(tri[i][j]==t[j]) s.insert(j);
                }
            }
        }
        return s.size()==3;
    }
};
