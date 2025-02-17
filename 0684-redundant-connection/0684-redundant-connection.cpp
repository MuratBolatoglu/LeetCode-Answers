class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> v_con;
        stack<vector<int>> ans;
        for (size_t i = 0; i < edges.size(); i++) {
            v_con[edges[i][1]].push_back(edges[i][0]);
            v_con[edges[i][0]].push_back(edges[i][1]);
            if (is_cyclic(v_con,edges[i][0])){
                v_con[edges[i][1]].pop_back();
                v_con[edges[i][0]].pop_back();
                return edges[i];
            }
        }
        return {};
    }
    bool is_cyclic(unordered_map<int, vector<int>> map,int start) {
        if (map.empty()) return false;
        set<int> visited;
        stack<int> s;
        s.push(start);
        while (!s.empty()) {
            int current = s.top();
            s.pop();
            if (visited.find(current) != visited.end()) return true;
            visited.insert(current);
            for (int neighbor : map[current]) {
                if (visited.find(neighbor) == visited.end()) s.push(neighbor);    
            }
        }
        return false;
    }
};
