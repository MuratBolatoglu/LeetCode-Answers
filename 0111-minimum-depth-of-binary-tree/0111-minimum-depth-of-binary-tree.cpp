/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int ans=INT_MAX;
        queue<pair<TreeNode*,int>> q;
        q.push({root,1});
        while(!q.empty()){
            auto [curr,depth]=q.front();
            q.pop();
            if(!curr->left && !curr->right) ans=min(ans,depth);
            if(curr->left) q.push({curr->left,depth+1});
            if(curr->right) q.push({curr->right,depth+1});
        }
        return ans;
    }
};