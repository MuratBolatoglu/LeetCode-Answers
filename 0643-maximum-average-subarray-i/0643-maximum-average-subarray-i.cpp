class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0, max_avg;
        for (int i = 0; i < k; i++) 
            sum += nums[i];
        max_avg = sum / k;  
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];
            max_avg = max(max_avg, sum / k);
        }
        return max_avg;
    }
};
