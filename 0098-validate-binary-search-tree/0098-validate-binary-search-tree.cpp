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
    bool isValidBST(TreeNode* root) {
        if(root==nullptr) return true;
        bool ans=true;
        check(root,ans,LLONG_MIN,LLONG_MAX);
        return ans;
    }
    void check(TreeNode* leaf,bool &ret,long long mini, long long maxi){
        if(leaf!= nullptr){
            if(leaf->val <= mini || leaf->val >= maxi) ret=false;
            if(leaf->left != nullptr){
                if(leaf->left->val >= leaf->val) ret=false;
                check(leaf->left,ret,mini,leaf->val);
            }
            if(leaf->right != nullptr){
                if(leaf->right->val <= leaf->val) ret=false;
                check(leaf->right,ret,leaf->val,maxi);
            }
        }
    }
};
