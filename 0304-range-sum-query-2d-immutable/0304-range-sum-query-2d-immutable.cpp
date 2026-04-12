class NumMatrix {
public:
    vector<vector<int>> grid,prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        grid = matrix;
        prefix = vector<vector<int>>(grid.size(), vector<int>(grid[0].size(), 0));
        for(size_t i = 0; i < grid.size(); i++){
            for(size_t j = 0; j < grid[i].size(); j++){
                if(j == 0) prefix[i][j] = grid[i][j];
                else prefix[i][j] = prefix[i][j-1] + grid[i][j];
            }
        }
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans=0;
        for(int i=row1;i<=row2;i++){
            ans += (col1 == 0) ? prefix[i][col2] : prefix[i][col2] - prefix[i][col1 - 1];
        }
        return ans;
    }
};