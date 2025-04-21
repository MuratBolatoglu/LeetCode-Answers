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
    TreeNode* searchBST(TreeNode* root, int t) {
        TreeNode* curr=root;
        if(!root) return NULL;
        while(curr){
            if(curr->val==t) return curr;
            if(curr->right &&  curr->val < t) curr=curr->right;
            else if(curr->left &&  curr->val > t) curr=curr->left;
            else curr=curr->right;
        }
        return nullptr;
    }
};