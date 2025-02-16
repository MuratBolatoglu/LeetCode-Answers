class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> pq;
        for(size_t i=0;i<s.size();i++){
            pq.push(s[i]);
        }
        while(pq.size()>1){
            int first=pq.top();
            pq.pop();
            int second=pq.top();
            pq.pop();
            pq.push(first-second);
        }
        return pq.top();
    }
};
