class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        size_t i=0;
        int count=1,ans=1;
        for(size_t i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            else if(nums[i]-1==nums[i-1]) count++;
            else{
                if(count>ans){
                    ans=count;
                }
                count=1;
            }
        }
        return max(count,ans);
    }
};