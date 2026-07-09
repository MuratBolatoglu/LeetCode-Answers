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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        func(root,target,nullptr);
        return root;
    }
    void func(TreeNode*& node, int x,TreeNode* prev){
        if(node->left != nullptr) func(node->left,x,node);
        if(node->right !=nullptr) func(node->right,x,node);
        if(node->left==nullptr && node->right==nullptr && node->val==x){
            if(prev==nullptr){
                node=nullptr;
                return;
            }
            if(prev->left == node) prev->left=nullptr;
            if(prev->right == node) prev->right=nullptr;
        } 

    }
};