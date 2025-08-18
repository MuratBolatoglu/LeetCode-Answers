class Solution {
public:
    priority_queue<int> pq;
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int index=0,time=0;
        vector< pair<int,int> > cp;
        for(size_t i=0;i<capital.size();i++) cp.push_back({capital[i],profits[i]});
        sort(cp.begin(),cp.end());
        for(size_t i=0;i<k;i++){
            find_best(index,cp,w);
            if(pq.empty()) break;
            w+=pq.top();
            pq.pop();
        }
        return w;
    }
    void find_best(int &i,vector< pair<int,int> > &v,int &cap){
        while(v[i].first<=cap && i<v.size()){
            pq.push(v[i].second);
            i++;
        }
    }
};