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
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return {};
        vector<string> ans;
        queue<pair<string,TreeNode*>> q;
        q.push({to_string(root->val),root});
        while(!q.empty()){
            auto [str,curr]=q.front();
            q.pop();
            if(curr->left)  q.push({str+"->"+to_string(curr->left->val),curr->left});
            if(curr->right)  q.push({str+"->"+to_string(curr->right->val),curr->right});
            if(!curr->left && !curr->right) ans.push_back(str);
        }
        return ans;
    }
};