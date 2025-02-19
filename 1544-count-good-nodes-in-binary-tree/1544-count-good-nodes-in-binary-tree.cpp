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
    int goodNodes(TreeNode* root) {
        if(root==nullptr) return 0;
        int ans=1,currentmax=root->val;
        if(root->left != nullptr)calc(ans,root->left,currentmax);
        if(root->right != nullptr)calc(ans,root->right,currentmax);
        return ans;
    }
    void calc(int &ret,TreeNode* leaf,int maxi){
        if(leaf->val >= maxi ){
            maxi=leaf->val;
            ret++;
        }
        if(leaf->left != nullptr) calc(ret,leaf->left,maxi);
        if(leaf->right != nullptr) calc(ret,leaf->right,maxi);
    }
};
