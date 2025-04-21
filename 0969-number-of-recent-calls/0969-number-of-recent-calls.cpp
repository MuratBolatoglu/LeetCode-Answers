class RecentCounter {
public:
    RecentCounter() {}
    int ping(int t) {
        q.push(t);
        int lower=t-3000;
        while(q.front() < lower) q.pop();
        return q.size();
    }
    queue<int> q;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */