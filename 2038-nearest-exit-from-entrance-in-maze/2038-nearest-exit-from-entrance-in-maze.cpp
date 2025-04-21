class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& ent) {
        vector<vector<bool>> visited(maze.size(),vector<bool>(maze[0].size(),false));
        queue<tuple<int,int,int>> q;
        q.push({ent[0],ent[1],0});
        while(!q.empty()){
            auto [row,col,step]=q.front();
            visited[row][col]=true;
            q.pop();
            if ((row == 0 || row == maze.size() - 1 || col == 0 || col == maze[0].size() - 1) &&(row != ent[0] || col != ent[1])) return step;
            vector<vector<int>> rot={{0,1},{0,-1},{1,0},{-1,0}};
            for(auto& r:rot){
                int x=row+r[0], y=col+r[1];
                if(x>=0 && x<maze.size() && y>=0 && y<maze[0].size() && maze[x][y]=='.' && visited[x][y]==false){
                    q.push({x,y,step+1});
                    visited[x][y]=true;
                }
            }
        }
        return -1;
    }
};