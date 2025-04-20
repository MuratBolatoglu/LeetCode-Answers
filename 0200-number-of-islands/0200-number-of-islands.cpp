class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        vector< vector<bool> > visited(grid.size(),vector<bool>(grid[0].size(),false));
        for(size_t i=0;i<grid.size();i++){
            for(size_t j=0; j< grid[0].size();j++){
                if(visited[i][j] || grid[i][j]=='0') continue;
                visited[i][j]=true;
                ans++;
                queue<pair<int,int>> q;
                q.push({i,j});
                while(!q.empty()){
                    auto [row,col]=q.front();
                    q.pop();
                    vector<pair<int,int>> rot={{0,1},{0,-1},{1,0},{-1,0}};
                    for(auto& r: rot){
                        auto [x,y]=r;
                        if(row+x>=0 && row+x<grid.size() && col+y>=0 && col+y<grid[0].size() && visited[row+x][col+y]==false && grid[row+x][col+y]=='1'){
                            q.push({row+x,col+y});
                            visited[row+x][col+y]=true;
                        }
                    }
                }
            }
        }
        return ans;
    }
};