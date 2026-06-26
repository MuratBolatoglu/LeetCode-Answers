class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        set<pair<int,int>> s;
        int ans=0;
        for(size_t i=0;i<board.size();i++){
            for(size_t j=0;j<board[i].size();j++){
                if(board[i][j]=='X'  &&   s.find({i,j})==s.end()  ){
                    stack< pair<int,int> > st;
                    st.push({i,j});
                    while(!st.empty()){
                        auto [x,y] = st.top();
                        s.insert({x,y});
                        st.pop();
                        if(x>0 && board[x-1][y]=='X' && s.find({x-1,y})==s.end()) st.push({x-1,y});
                        else if(x<board.size()-1 && board[x+1][y]=='X' && s.find({x+1,y})==s.end()) st.push({x+1,y});
                        else if(y>0 && board[x][y-1]=='X' && s.find({x,y-1})==s.end()) st.push({x,y-1});
                        else if(y<board[x].size()-1 && board[x][y+1]=='X' && s.find({x,y+1})==s.end()) st.push({x,y+1});
                    } 
                    ans++;
                }
            }
        }
        return ans;
    }
};