class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0, sum = nums[0], ans = INT_MAX;
        while (right < nums.size()) {
            if (sum < target) {
                right++;
                if (right < nums.size()) sum += nums[right];
            } else {
                ans = min(ans, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return (ans == INT_MAX) ? 0 : ans;
    }
};
