class Solution {
public:
    void solve(vector<vector<char>>& board) {
        set< pair<int,int> > visited;
        for(size_t i=0;i<board.size();i++){
            for(size_t j=0;j<board[i].size();j++){
                if(board[i][j]=='O' && visited.find({i,j})==visited.end()){
                    queue< pair<int,int> > q;
                    q.push({i,j});
                    visited.insert({i,j});
                    vector< pair<int,int> > os;
                    while(!q.empty()){
                        pair<int,int> current=q.front();
                        q.pop();
                        os.push_back(current);
                        int x=current.first, y=current.second;
                        if(x<board.size()-1 && board[x+1][y]=='O' && visited.find({x+1,y})==visited.end()){
                            q.push({x+1,y});
                            os.push_back({x+1,y});
                            visited.insert({x + 1, y});
                        } 
                        if(x>0 && board[x-1][y]=='O' && visited.find({x-1,y})==visited.end()){
                          q.push({x-1,y});
                          os.push_back({x-1,y});
                          visited.insert({x -1, y}); 
                        } 
                        if(y<board[x].size()-1 && board[x][y+1]=='O' && visited.find({x,y+1})==visited.end()){
                            q.push({x,y+1});
                            os.push_back({x,y+1});
                            visited.insert({x, y+1});
                        } 
                        if(y>0 && board[x][y-1]=='O' && visited.find({x,y-1})==visited.end()){
                            q.push({x,y-1});
                            os.push_back({x,y-1});
                            visited.insert({x, y-1});
                        } 
                    }
                    if(isedge(os,board[i].size(),board.size()) ){
                        for(size_t i=0;i<os.size();i++){
                            board[os[i].first][os[i].second]='X';
                        }
                    }
                }
            }
        }
    }
    int isedge(vector< pair<int,int> > v,int right,int bottom){
        for(size_t i=0;i<v.size();i++){
            int x=v[i].first,y=v[i].second;
            if(x==0 || x==bottom-1 || y==0 || y==right-1) return false;
        }
        return true;
    }
};
