class Solution {
public:
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
