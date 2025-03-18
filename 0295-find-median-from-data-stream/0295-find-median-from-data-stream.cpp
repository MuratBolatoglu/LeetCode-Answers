class MedianFinder {
public:
    MedianFinder() {}
    void addNum(int num) {
        if (left.empty() || num <= left.top()) {
            left.push(num);
        } else {
            right.push(num);
        }
        if (left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        } else if (right.size() > left.size()) {
            left.push(right.top());
            right.pop();
        }
    }
    double findMedian() {
        if (left.size() == right.size()) return (left.top() + right.top()) / 2.0;
         else return left.top();
    }
    priority_queue<double, vector<double>, greater<double>> right;
    priority_queue<double> left;
};
