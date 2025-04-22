class SmallestInfiniteSet {
public:
    SmallestInfiniteSet() {}
    int popSmallest() {
        if (!pq.empty()) {
            int ret = pq.top();
            pq.pop();
            s.erase(ret);
            return ret;
        }
        return current++;
    }
    void addBack(int num) {
        if (num < current && s.find(num) == s.end()) {
            pq.push(num);
            s.insert(num);
        }
    }
    int current=1;
    unordered_set<int> s;
    priority_queue<int, vector<int>, greater<int>> pq;
};
