class Solution {
public:
//prim 
    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<bool> visited(points.size(), false);
        int ans = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});
        while (!pq.empty()) {
            int dist = pq.top().first, index = pq.top().second;
            pq.pop();
            if (visited[index]) continue;
            visited[index] = true;
            ans += dist;
            for (int i = 0; i < points.size(); i++) {
                if (!visited[i]) {
                    int manhattan = abs(points[index][0] - points[i][0]) + abs(points[index][1] - points[i][1]);
                    pq.push({manhattan, i});
                }
            }
        }
        return ans;
    }
};
