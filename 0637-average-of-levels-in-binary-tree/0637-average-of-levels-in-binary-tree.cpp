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
    vector<double> averageOfLevels(TreeNode* root) {
        queue< pair<TreeNode*,int> > q;
        vector<double> ans;
        vector<pair<double,int>> avg={{0,0},{0,0}};
        q.push({root,1});
        while(!q.empty()){
            TreeNode* curr=q.front().first;
            int level=q.front().second;
            double value=curr->val;
            if(level==avg.size()) avg.push_back({value,1});
            else{
                avg[level].first+=value;
                avg[level].second++;
            }
            if(curr->left) q.push({curr->left,level + 1});
            if(curr->right) q.push({curr->right,level + 1});
            q.pop();
        }
        for(int i=1;i<avg.size();i++){
            ans.push_back(avg[i].first/avg[i].second);
        }
        return ans;
    }
};