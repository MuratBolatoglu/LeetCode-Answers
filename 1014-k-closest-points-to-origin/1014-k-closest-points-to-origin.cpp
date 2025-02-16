class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue <pair<int,vector<int>>> pq;
        for(size_t i=0;i<points.size();i++){
            int x=points[i][0],y=points[i][1];
            int distance=x*x + y*y;
            pq.push({distance,points[i]});
            if(pq.size()>k) pq.pop();
        }
        while(!pq.empty()){
            ans.push_back((pq.top()).second);
            pq.pop();
        }
        return ans;
    }
};
