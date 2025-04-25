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
    void flatten(TreeNode* root) {
        if(!root) return ;
        vector<TreeNode*> v;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode* curr=s.top();
            v.push_back(curr);
            s.pop();
            if(curr->right) s.push(curr->right);
            if(curr->left) s.push(curr->left);
            curr->left=nullptr;
            curr->right=nullptr;
        }
        TreeNode* tail=nullptr;
        for(size_t i=0;i<v.size();i++){
            if(i==0){
                root=v[0];
                tail=root;
            }else{
                tail->left=nullptr;
                tail->right=v[i];
                tail=tail->right;
            }
        }
        if(tail) tail->left=nullptr; tail->right=nullptr;
    }
};