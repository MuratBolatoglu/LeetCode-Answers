class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue< pair<int,int> > q;
        set< pair<int,int> > visited;
        int tomato=0,minutes=0;
        for(size_t i=0;i<grid.size();i++){
            for(size_t j=0;j<grid[i].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    visited.insert({i,j});
                }else if(grid[i][j]==1) tomato++;
            }
        }
        while(!q.empty() && tomato>0){

            int size=q.size();
            for(int i=0;i<size;i++){
                pair<int,int> current=q.front();
                visited.insert(current);
                q.pop();
                int x=current.first, y=current.second;
                grid[x][y]=2;
                if(x<grid.size()-1 && grid[x+1][y]==1 && visited.find({x+1,y})==visited.end()){
                    q.push({x+1,y});
                    visited.insert({x+1,y});
                    tomato--;
                } 
                if(x>0 && grid[x-1][y]==1 && visited.find({x-1,y})==visited.end()){
                    q.push({x-1,y});
                    visited.insert({x-1,y});
                    tomato--;
                } 
                if(y<grid[x].size()-1 && grid[x][y+1]==1 && visited.find({x,y+1})==visited.end()){
                    q.push({x,y+1});
                    visited.insert({x,y+1});
                    tomato--;
                } 
                if(y>0 && grid[x][y-1]==1 && visited.find({x,y-1})==visited.end()){
                    q.push({x,y-1});
                    visited.insert({x,y-1});
                    tomato--;
                } 
            }
            minutes++;
        }
        if(tomato!=0) return -1;
        return minutes;
    }
};
