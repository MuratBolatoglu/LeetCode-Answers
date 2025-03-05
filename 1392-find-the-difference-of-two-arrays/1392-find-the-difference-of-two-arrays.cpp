class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s,s1(nums1.begin(), nums1.end()),s2(nums2.begin(), nums2.end());
        vector<vector<int>> ans={{},{}};
        for(auto& i : s1) s.insert(i);
        for(auto& i : s2)if(s.find(i)==s.end()) ans[1].push_back(i); else s.erase(i);
        for(auto& i : s) ans[0].push_back(i);
        return ans;
    }
};