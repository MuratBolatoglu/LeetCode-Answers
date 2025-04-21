class RecentCounter {
public:
    RecentCounter() {}
    int ping(int t) {
        int ans = 0, lower = t - 3000;
        s.push(t);
        stack<int> temp = s;
        while (!temp.empty() && temp.top() >= lower) {
            ans++;
            temp.pop();
        }

        return ans;
    }
    stack<int> s;
};
