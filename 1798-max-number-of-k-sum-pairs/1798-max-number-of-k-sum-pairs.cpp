class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int ans = 0;
        for (auto& i : nums) m[i]++;
        for (auto& i : nums) {
            int target = k - i;
            if (m[i] > 0 && m[target] > 0) {
                if (i == target && m[i] < 2) continue;
                m[i]--;
                m[target]--;
                ans++;
            }
        }
        return ans;
    }
};
