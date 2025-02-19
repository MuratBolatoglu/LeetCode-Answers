class Solution {
public:
//dijkstra
    int networkDelayTime(vector<vector<int>>& times, int n, int start) {
        vector<vector<pair<int,int>>> adj(n); 
        for(auto& time: times){
            adj[time[0]-1].push_back({time[1]-1,time[2]});
        }
        start--;
        unordered_map<int,int> dist;
        for(size_t i=0;i<adj.size();i++){
            dist[i]=INT_MAX;
        }
        dist[start]=0;
        stack<int> s;
        s.push(start);
        while(!s.empty()){
            int current=s.top(),currw=dist[current];
            s.pop();
            for(auto& i : adj[current]){
                int neighbor= i.first ,new_dist=currw + i.second;
                if(new_dist < dist[neighbor]){
                    dist[neighbor] = new_dist;
                    s.push(neighbor);
                } 
                
            }
        }
        int maxTime = 0;
        for (int i = 0; i < n; ++i) {
            if (dist[i] == INT_MAX) return -1;
            maxTime = max(maxTime, dist[i]);
        }
        return maxTime;
    }
};
