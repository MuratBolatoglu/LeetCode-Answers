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
    bool isBalanced(TreeNode* root) {
        bool ans=true;
        calc(root,ans);
        return ans;    
    }
    int calc(TreeNode* leaf,bool &a){
        if(leaf==nullptr) return 0;
        int lh=calc(leaf->left,a),rh=calc(leaf->right,a);
        if(abs(lh-rh)>1) a=false;
        return 1+max(lh,rh);
    }
};
