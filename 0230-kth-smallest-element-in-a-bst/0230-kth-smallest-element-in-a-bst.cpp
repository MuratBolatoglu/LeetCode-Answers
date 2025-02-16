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
    int kthSmallest(TreeNode* root, int k) {
        priority_queue <int> pq;
        func(root,pq,k);
        return pq.top();
    }
    void func(TreeNode* leaf,priority_queue <int>& q,int limit){
        if(leaf!=nullptr){
            q.push(leaf->val);
            if(q.size()>limit) q.pop();
        } 
        if(leaf->left!=nullptr) func(leaf->left,q,limit);
        if(leaf->right!=nullptr) func(leaf->right,q,limit);
    }
};
