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
    int longestZigZag(TreeNode* root) {
        if(!root || (!root->left && !root->right)) return 0;
        int ans=INT_MIN;
        stack< tuple<TreeNode*,bool,int> > s;
        if(root->left) s.push({root->left,true,1});
        if(root->right) s.push({root->right,false,1});
        while(!s.empty()){
            auto [curr,r,step] = s.top();
            s.pop();
            ans=max(step,ans);
            if(curr->right){
                if(r==true) s.push({curr->right,false,step + 1});
                else s.push({curr->right,false,1});
            } 
            if(curr->left){
                if(r==false) s.push({curr->left,true,step + 1});
                else s.push({curr->left,true,1});
            } 
        }
        return ans;
    }
};