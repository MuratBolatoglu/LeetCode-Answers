class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visit(rooms.size(), false);
        queue< pair<int,vector<int>> > q;
        q.push({0,rooms[0]});
        visit[0]=true;
        while(!q.empty()){
            auto [room,keys] =q.front();
            q.pop();
            for(auto& i : keys){
                if(visit[i]==false){
                    q.push({i,rooms[i]});
                    visit[i]=true;
                }
            }
        }
        for(bool i : visit) if(i==false) return false;
        return true;
    }
};