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
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        calc(root,ans);
        return ans;
    }
    int calc(TreeNode* node, int& ret){
        if(node==nullptr) return 0;
        int left=max(0,calc(node->left,ret)),right=max(0,calc(node->right,ret));
        ret=max(ret,node->val + left + right);
        return node->val + max(left, right);
    }
};
