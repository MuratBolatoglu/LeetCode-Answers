class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& main) {
        subsets(main);
        set<vector<int>> s;
        for(size_t i=0;i<ans.size();i++){
            sort(ans[i].begin(), ans[i].end());
            s.insert(ans[i]);
        }
        vector<vector<int>> ret;
        set<vector<int>>::iterator itr;
        for(itr=s.begin();itr!=s.end();itr++){
            ret.push_back(*itr);
        }
        return ret;
    }
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> x;
        generate(x, nums);
        return ans;
    }
    void generate(vector<int> sub, vector<int> v) {
        if (v.empty()) {
            ans.push_back(sub);
            return;
        }
        int last = v.back();
        v.pop_back();
        generate(sub, v);
        sub.push_back(last);
        generate(sub, v);
    }
};
