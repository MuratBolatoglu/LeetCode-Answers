class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, r = 0, limit = k, ans = 0;
        while (r < nums.size()) {
            if (nums[r] == 0) limit--;
            while (limit < 0) {
                if (nums[l] == 0) limit++;
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    }
};
