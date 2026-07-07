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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==nullptr) return {};
        vector<int> ans;
        func(ans,root);
        return ans;
    }
    void func(vector<int>& v , TreeNode* node){
        if(node->left != nullptr) func(v,node->left);
        v.push_back(node->val);
        if(node->right != nullptr) func(v,node->right);
        
    }
};