class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows,cols;
        for(size_t i=0;i<matrix.size();i++){
            for(size_t j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        set<int>::iterator itr;
        for (itr=rows.begin();itr!=rows.end();itr++){
            matrix[*itr]=vector<int> (matrix[*itr].size(),0);
        }
        for(size_t i=0;i<matrix[0].size();i++){
            if(cols.find(i)!=cols.end()){
                for(size_t j=0;j<matrix.size();j++){
                    matrix[j][i]=0;
                }
            }
        }
    }
};
