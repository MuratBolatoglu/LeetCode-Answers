#include <vector>
#include <queue>
#include <utility>

class Solution {
public:
    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        std::vector<int> ans;
        std::priority_queue<std::pair<int, int>> pq; // Max-heap (value, index)

        for (int i = 0; i < nums.size(); ++i) {
            // Add the current element and its index to the heap
            pq.push({nums[i], i});

            // Remove elements from the heap that are out of the current window
            while (!pq.empty() && pq.top().second <= i - k) {
                pq.pop();
            }

            // Once the window is fully within bounds, add the maximum element to the result
            if (i >= k - 1) {
                ans.push_back(pq.top().first);
            }
        }

        return ans;
    }
};
