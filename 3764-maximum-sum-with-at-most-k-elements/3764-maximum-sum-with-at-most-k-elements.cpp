class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        long long ans=0;
        priority_queue<int, vector<int> , greater<int>> pq;
        for(size_t i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end(),greater<>());
            for(int j=0;j<limits[i];j++){
                pq.push(grid[i][j]);
                if(pq.size()>k) pq.pop();
            }
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};