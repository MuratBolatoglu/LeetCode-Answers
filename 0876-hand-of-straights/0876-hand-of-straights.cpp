class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {
        if (hand.size() % g != 0)
                return false;
        unordered_map<int,int> m;
        for(size_t i=0;i<hand.size();i++){
            m[hand[i]]++;
        }

        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto& pair: m){
            pq.push(pair.first);
        }


        while(!pq.empty()){
            int first=pq.top();
            for(int i=first;i<first+ g;i++){
                if(m.find(i)==m.end() || m[i]==0) return false;
                m[i]--;
                if (m[i] == 0 && i == pq.top()) {
                    pq.pop();
                }
            }
        }
        return true;
    }
};
