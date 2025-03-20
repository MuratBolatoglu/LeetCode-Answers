class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if (!root) return 0;
        int ans = 0;
        queue<pair<TreeNode*, string>> q;
        q.push({root, ""});
        while (!q.empty()) {
            TreeNode* curr = q.front().first;
            string path = q.front().second;
            q.pop();
            path += to_string(curr->val);
            if (!curr->left && !curr->right) {
                ans += stoi(path);
            } else {
                if (curr->left) q.push({curr->left, path});
                if (curr->right) q.push({curr->right, path});
            }
        }
        return ans;
    }
};
