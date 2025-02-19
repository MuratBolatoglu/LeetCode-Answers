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
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        calc(root,ans);
        return ans;
    }
    int calc(TreeNode *leaf,int &diameter){
        if(leaf==nullptr) return 0;
        int lefth=calc(leaf->left,diameter),righth=calc(leaf->right,diameter);
        diameter=max(lefth+righth,diameter);
        return 1+max(lefth,righth);
    }
};
