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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> l1=get_leaf(root1);
        vector<int> l2=get_leaf(root2);
        return l1==l2;
    }
    vector<int> get_leaf(TreeNode* head){
        vector<int> ret;
        stack<TreeNode*> s;
        s.push(head);
        while(!s.empty()){
            TreeNode* curr=s.top();
            s.pop();
            if(curr->left) s.push(curr->left);
            if(curr->right) s.push(curr->right);
            if(!curr->right && !curr->left) ret.push_back(curr->val);
        }
        return ret;
    }
};