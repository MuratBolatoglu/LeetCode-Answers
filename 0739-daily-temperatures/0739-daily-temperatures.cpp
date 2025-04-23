class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>> s;
        vector<int> ans(t.size(), 0);
        for (int i = t.size() - 1; i >= 0; i--) {
            while (!s.empty() && s.top().first <= t[i]) s.pop();
            if (!s.empty()) ans[i] = s.top().second - i;
            s.push({t[i], i});
        }
        return ans;
    }
};
