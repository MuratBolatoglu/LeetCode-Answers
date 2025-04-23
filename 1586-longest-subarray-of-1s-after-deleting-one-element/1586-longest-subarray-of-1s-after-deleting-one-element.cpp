class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int limit=1,l=0,r=0,ans=0,temp=0;;
        while(r < nums.size()){
            if(nums[r]==0) limit--;
            else temp++;
            if(limit<0){
                while(limit<0){
                    if(nums[l]==0) limit++;
                    else temp--;
                    l++;
                }
            }
            ans=max(temp,ans);
            r++;
        }
        return ans == nums.size() ? ans - 1 : ans;
    }
};