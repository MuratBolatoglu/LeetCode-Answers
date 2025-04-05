class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            auto [curr, depth] = q.front();
            q.pop();
            if (depth == ans.size()) ans.push_back({});
            if (depth % 2 == 0)  ans[depth].push_back(curr->val);
            else ans[depth].insert(ans[depth].begin(), curr->val);
            if (curr->left) q.push({curr->left, depth + 1});
            if (curr->right) q.push({curr->right, depth + 1});
        }
        return ans;
    }
};
