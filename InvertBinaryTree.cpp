    void Invert(TreeNode* root) {
        if (root==NULL) return;
        swap(root->left, root->right);
        Invert(root->left);
        Invert(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        Invert(root);
        return root;
    }
