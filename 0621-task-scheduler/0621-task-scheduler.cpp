class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int ans = 0;
        map<char, int> m;
        priority_queue<int> pq;
        queue<pair<int, int>> wait; 
        for (char task : tasks) {
            m[task]++;
        }
        for (auto it = m.begin(); it != m.end(); it++) {
            pq.push(it->second);
        }
        while (!pq.empty() || !wait.empty()) {
            if (!pq.empty()) {
                int current = pq.top();
                pq.pop();
                ans++;
                if (current > 1) {
                    wait.push({current - 1, ans + n});
                }
            } else {
                ans++;
            }
            if (!wait.empty() && ans >= wait.front().second) {
                pq.push(wait.front().first);
                wait.pop();
            }
        }
        return ans;
    }
};