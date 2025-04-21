class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        vector<int> ans;
        stack<int> s;
        for (size_t i = 0; i < ast.size(); i++) {
            if (ast[i] > 0) {
                s.push(ast[i]);
            } else {
                bool alive = true;
                while (!s.empty() && s.top() > 0) {
                    if (s.top() < -ast[i]) {
                        s.pop();
                    } else if (s.top() == -ast[i]) {
                        s.pop();
                        alive = false;
                        break;
                    } else {
                        alive = false;
                        break;
                    }
                }
                if (alive) s.push(ast[i]);
            }
        }
        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
