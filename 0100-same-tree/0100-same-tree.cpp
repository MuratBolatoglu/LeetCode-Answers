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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans=true;
        check(p,q,ans);
        return ans;   
    }
    void check(TreeNode* a,TreeNode* b,bool &x){
        if((a==nullptr && b!=nullptr) || (a!=nullptr && b==nullptr)) x=false;
        else if(a!=nullptr && b!=nullptr && a->val != b->val) x=false;
        if(a!=nullptr && b!=nullptr)check(a->left,b->left,x);
        if(a!=nullptr && b!=nullptr)check(a->right,b->right,x);
    }
};
