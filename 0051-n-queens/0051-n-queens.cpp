class Solution {
public:
    vector< vector<string> > ans;
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        solve(board,0,{},{},{},{},n);
        return ans;
    }

    void solve(vector<string> grid, int qnum, set<int> row, set<int> posdiag,set<int> col,set<int> negdiag,int need){
        if(qnum==need){
            ans.push_back(grid);
            return;
        }
        for(size_t i=0;i<grid.size();i++){
            if(row.find(i) != row.end()) continue;

            for(size_t j=0;j<grid.size();j++){
                if(col.find(j) != col.end()) continue;
                
                int pos=i+j , neg=i-j;
                if(posdiag.find(pos) != posdiag.end() || negdiag.find(neg) != negdiag.end()) break;


                vector<string> temp=grid;
                temp[i][j]='Q';
                set<int> temprow=row , tempcol=col, tempposdiag=posdiag, tempnegdiag=negdiag;
                temprow.insert(i);
                tempcol.insert(j);
                tempposdiag.insert(pos);
                tempnegdiag.insert(neg);
                solve(temp,qnum+1,temprow,tempposdiag,tempcol,tempnegdiag,need);
                break;
            }
        }
    }

};
