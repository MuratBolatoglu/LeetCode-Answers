class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        for (size_t i = 0; i < m; i++) {
            for (size_t j = 0; j < n; j++) {
                int r,u;
                bool fr=false, fu=false;
                if(i>0){
                    fu=true;
                    u=grid[i-1][j]; 
                } 
                if(j>0){
                    fr=true;
                    r=grid[i][j-1];
                }  
                if(fu && fr ) grid[i][j]+=min(u,r);
                else if(fu) grid[i][j]+=u;
                else if(fr) grid[i][j]+=r;
            }
        }
        return grid[m - 1][n - 1];
    }
};
