class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(size_t i=0;i<board.size();i++){
            vector<char> check;
            for(size_t j=0;j<board[i].size();j++){
                if(board[i][j]=='.') continue;
                if(find(check.begin(),check.end(),board[i][j])!=check.end()) return false;
                check.push_back(board[i][j]);
            }
        }//row check


        for(size_t i=0;i<board.size();i++){
            vector<char> check;
            for(size_t j=0;j<board[i].size();j++){
                if(board[j][i]=='.') continue;
                if(find(check.begin(),check.end(),board[j][i])!=check.end()) return false;
                check.push_back(board[j][i]);
            }
        }//col check
        for(size_t row=0;row<9;row+=3){
            for(size_t col=0;col<9;col+=3){
                vector<char> check;
                for(size_t i=0;i<3;i++){
                    for(size_t j=0;j<3;j++){
                        if(board[row+i][col+j]=='.') continue;
                        if(find(check.begin(),check.end(),board[row+i][col+j])!=check.end()) return false;
                        check.push_back(board[row+i][col+j]);
                    }
                }
            }
        }


        return true;
    }
};
