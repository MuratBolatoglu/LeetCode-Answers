class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int can) {
        unordered_set<int> taken;
        long long ans=0;
        priority_queue<long long, vector<long long>,greater<long long>> l,r;
        for(int i=0;i<can;i++){
            l.push(costs[i]);
            taken.insert(i);
        } 
        for(int i=costs.size()-1;i>=costs.size()-can;i--){
            if(taken.find(i) == taken.end()){
                r.push(costs[i]);
                taken.insert(i);
            }else break;
        } 
        int lindex=can,rindex=costs.size()-can-1;
        for (int i = 0; i < k; i++) {
            long long lmin = l.empty() ? LLONG_MAX : l.top();
            long long rmin = r.empty() ? LLONG_MAX : r.top();
            if (lmin <= rmin) {
                ans += lmin;
                l.pop();
                if (lindex < costs.size() && taken.find(lindex)==taken.end()){
                    taken.insert(lindex);
                    l.push(costs[lindex]);
                    lindex++;
                }
            } else {
                ans += rmin;
                r.pop();
                if (rindex >= 0 && taken.find(rindex)==taken.end()) {
                    taken.insert(rindex);
                    r.push(costs[rindex]);
                    rindex--;
                }
            }
        }
        return ans;
    }
};