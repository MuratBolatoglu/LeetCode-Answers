class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int ans=INT_MIN;
        sort(nums.begin(),nums.end());
        if(nums.size()==1) return 0;
        for(size_t i=1;i<nums.size();i++){
            ans=max(nums[i] - nums[i-1],ans);
        }
        return ans;
    }
};