class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;
        TreeNode* ret = nullptr;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();
            if (curr->val != key) insert(ret, new TreeNode(curr->val));
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        return ret;
    }
    void insert(TreeNode*& root, TreeNode* node) {
        if (!root) {
            root = node;
            return;
        }
        TreeNode* curr = root, *prev=nullptr;
        while(curr){
            prev=curr;
            if(curr->val > node->val) curr=curr->left;
            else curr=curr->right;
        }
        if(prev->val > node->val) prev->left=node;
        else prev->right=node;
    }
};
