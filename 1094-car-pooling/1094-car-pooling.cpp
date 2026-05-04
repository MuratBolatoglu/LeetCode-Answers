class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> from, to;
        for (auto& i : trips) {
            from.push({i[1], i[0]});
            to.push({i[2], i[0]});
        }
        while (!from.empty() || !to.empty()) {
            int nextStart = from.empty() ? INT_MAX : from.top().first;
            int nextEnd   = to.empty()   ? INT_MAX : to.top().first;
            int trip = min(nextStart, nextEnd);
            while (!to.empty() && to.top().first == trip) {
                capacity += to.top().second;
                to.pop();
            }
            while (!from.empty() && from.top().first == trip) {
                capacity -= from.top().second;
                from.pop();
            }
            if (capacity < 0) return false;
        }
        return true;
    }
};