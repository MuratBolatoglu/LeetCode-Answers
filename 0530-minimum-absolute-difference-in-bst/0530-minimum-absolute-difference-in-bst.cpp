class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        if (!root) return 0;
        vector<int> values;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            values.push_back(node->val);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        sort(values.begin(), values.end());
        int minDiff = INT_MAX;
        for (int i = 1; i < values.size(); ++i) {
            minDiff = min(minDiff, values[i] - values[i - 1]);
        }
        return minDiff;
    }
};
