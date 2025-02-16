class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& newi) {
        if(inter.empty()) return {newi};
        inter.push_back(newi);
        sort(inter.begin(),inter.end(),[](const vector<int> &i1, const vector<int> &i2){
            return i1[0]<i2[0];
        });
        vector<vector<int>> list = { inter[0] };
        for (size_t i = 1; i < inter.size(); i++) {
            if (inter[i][0] <= list.back()[1]) {
                list.back()[1] = max(inter[i][1], list.back()[1]);
            }else list.push_back(inter[i]);
        }
        return list;
    }
};
