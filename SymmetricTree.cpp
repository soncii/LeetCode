    bool tr(TreeNode *left, TreeNode *right) {
        if (left==NULL && right==NULL) return true;
        if (left==NULL || right==NULL) return false;
        if(right->val!=left->val) return false;
        return  tr(left->left, right->right) && tr(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        return tr(root->left, root->right);
    }
