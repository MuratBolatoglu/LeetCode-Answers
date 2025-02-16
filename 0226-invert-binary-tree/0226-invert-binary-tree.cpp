class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return nullptr;

        TreeNode* node = new TreeNode(root->val);
        
        node->right = invertTree(root->left);
        node->left = invertTree(root->right);

        return node;
    }
};