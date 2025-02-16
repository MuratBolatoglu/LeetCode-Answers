class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int ans=INT_MIN;
        for(size_t i=0;i<nums.size();i++){
            int count=0;
            for(size_t j=i;j<nums.size();j++){
                count+=nums[j];
                ans=max(count,ans);
            }
        }
        return ans;
    }
};
