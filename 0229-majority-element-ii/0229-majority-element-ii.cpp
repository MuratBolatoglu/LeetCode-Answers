class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size()/3;
        unordered_map<int,int> m;
        for(auto& i : nums) m[i]++;
        for(auto& i:m) if(i.second > n) ans.push_back(i.first);
        return ans;
    }
};