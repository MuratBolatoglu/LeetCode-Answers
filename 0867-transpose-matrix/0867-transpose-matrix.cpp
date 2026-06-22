class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector< vector<int> > temp(matrix[0].size(),vector<int>(matrix.size(),0));
        for(size_t i=0;i<matrix.size();i++){
            for(size_t j=0;j<matrix[i].size();j++){
                temp[j][i]=matrix[i][j];
            }
        }
        return temp;
    }
};