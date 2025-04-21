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
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        vector<int> sums;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int temp=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                temp+=q.front()->val;
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                q.pop();
            }
            sums.push_back(temp);
        }
        int ans=0,max=sums[0];
        for(size_t i=0;i<sums.size();i++){
            if(sums[i]>max){
                max=sums[i];
                ans=i;
            }
        }
        return ans+1;
    }
};