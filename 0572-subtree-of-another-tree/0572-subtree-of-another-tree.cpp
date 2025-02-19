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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==nullptr) return true;
        if(root==nullptr) return false;
        if(issame(root,subRoot)) return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
        
    }
    bool issame(TreeNode* leaf,TreeNode* temp){
        if(leaf==nullptr && temp==nullptr) return true;
        if(leaf && temp && leaf->val == temp->val) return issame(leaf->left,temp->left)
         && issame(leaf->right,temp->right);
        return false;
    }


};
