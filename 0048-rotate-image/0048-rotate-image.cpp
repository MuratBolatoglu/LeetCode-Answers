class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(size_t i=0;i<matrix.size();i++){
            for(size_t j=i+1;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        } 
        for(size_t i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
