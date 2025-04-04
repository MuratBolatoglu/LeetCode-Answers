class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return nums[0];
        vector<int> ans(nums.size(),0);
        ans[0]=nums[0];
        ans[1]=max(nums[0],nums[1]);
        for(size_t i=2;i<nums.size();i++){
            ans[i]=max(ans[i-1],nums[i]+ans[i-2]);
        }
        return ans.back();
    }
};