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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode* curr=s.top();
            s.pop();
            if(curr->val <= high && curr->val >= low)  ans+=curr->val;
            if(curr->left) s.push(curr->left);
            if(curr->right) s.push(curr->right);
        }
        return ans;
    }
};