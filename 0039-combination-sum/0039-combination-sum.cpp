class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> x;
        set<vector<int>> s;
        generate(nums, target, 0, x);
        for(size_t i=0;i<ans.size();i++){
            sort(ans[i].begin(),ans[i].end());
            s.insert(ans[i]);
        }
        vector<vector<int>> ret;
        set<vector<int>>::iterator it;
        for(it=s.begin();it!=s.end();it++){
            ret.push_back(*it);
        }
        return ret;
    }   
    void generate(vector<int>& nums, int target, int curr, vector<int>& vec) {
        if (curr > target) return;
        if (curr == target) {
            ans.push_back(vec);
            return;
        }
        for (size_t i = 0; i < nums.size(); i++) {
            if (curr + nums[i] <= target) {
                vector<int> temp=vec;
                temp.push_back(nums[i]);
                generate(nums, target, curr + nums[i], temp);
            }
        }
    }
};
