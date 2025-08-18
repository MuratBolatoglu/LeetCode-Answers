class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int m = board.size(), n = board[0].size();
        unordered_set<int> vis;
        queue<pair<int,int>> q;
        q.push({0, 1});
        vis.insert(1);
        while (!q.empty()) {
            auto [move, square] = q.front(); q.pop();
            if (square == m * n) return move;
            for (int i = square + 1; i <= min(square + 6, m * n); ++i) {
                int col = (i - 1) % n;
                int rfb = (i - 1) / n;
                if (rfb % 2 == 1) col = n - 1 - col;
                int row = m - 1 - rfb;
                int next = (board[row][col] == -1) ? i : board[row][col];
                if (!vis.count(next)) {
                    vis.insert(next);
                    q.push({move + 1, next});
                }
            }
        }
        return -1;
    }
};
