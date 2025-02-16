class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        set< pair<int,int>  > visited;
        for(size_t i=0;i<grid.size();i++){
            for(size_t j=0;j<grid[i].size();j++){
                if(grid[i][j]== 1 && visited.find({i,j})==visited.end()){
                    int count=0;
                    queue<pair<int,int> > q;
                    q.push({i,j});
                    visited.insert({i,j});
                    while(!q.empty()){
                        pair<int,int> current=q.front();
                        
                        q.pop();
                        count++;
                        int x=current.first, y=current.second;
                        if(x<grid.size()-1 && grid[x+1][y]==1 && visited.find({x+1,y})==visited.end()){
                            q.push({x+1,y});
                            visited.insert({x + 1, y});
                        } 
                        if(x>0 && grid[x-1][y]==1 && visited.find({x-1,y})==visited.end()){
                          q.push({x-1,y});
                          visited.insert({x -1, y}); 
                        } 
                        if(y<grid[x].size()-1 && grid[x][y+1]==1 && visited.find({x,y+1})==visited.end()){
                            q.push({x,y+1});
                            visited.insert({x, y+1});
                        } 
                        if(y>0 && grid[x][y-1]==1 && visited.find({x,y-1})==visited.end()){
                            q.push({x,y-1});
                            visited.insert({x, y-1});
                        } 
                    }
                    ans=max(count,ans);
                }
            }
        }
        return ans;
    }
};
