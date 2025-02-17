class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
       vector< vector<int> > ans;
       set< pair<int,int> > valid;
       int top=0,bottom=h.size()-1,left=0,right=h[0].size()-1;
       for(int i=0;i<h.size();i++){
        for(int j=0;j<h[i].size();j++){
            bool atlantic=false,pacific=false;
            set< pair<int,int> > visited;
            queue< pair<int,int> > q;
            q.push({i,j});
            visited.insert({i,j});
            while(!q.empty()){
                pair<int,int> current=q.front();
                int x=current.first, y=current.second;
                q.pop();
                if(valid.find(current) != valid.end()){
                    ans.push_back({i,j});
                    valid.insert({x,y});
                    break;
                }
                if(y==left || x==top) pacific=true;
                if(y==right || x==bottom) atlantic=true;
                vector< pair<int,int> > neighbors={{0,1},{1,0},{-1,0},{0,-1}};
                for(int k=0;k<neighbors.size();k++){
                    int dx=x+neighbors[k].first , dy=y+neighbors[k].second;
                    if(dx<=bottom && dx>=top && dy<=right && dy>=left && visited.find({dx,dy})==visited.end() && h[dx][dy]<=h[x][y]){
                        q.push({dx,dy});
                        visited.insert({dx,dy});
                    }
                }
                if(atlantic && pacific){
                    ans.push_back({i,j});
                    valid.insert({i,j});
                    break;
                } 
            }
        }
       }
       return ans; 
    }
};
