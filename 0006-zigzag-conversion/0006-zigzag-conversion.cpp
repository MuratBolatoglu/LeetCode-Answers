class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        string ans="";
        vector<vector<char>> grid(numRows);
        int index=0,rot=1;
        for(auto& i : s){
            grid[index].push_back(i);
            index+=rot;
            if(index==0 || index==numRows-1) rot*=-1;
        }
        for(auto& i : grid){
            for(auto& j: i){
                ans+=j;
            }
        }
        return ans;
    }
};