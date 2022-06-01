    int maxDepth(TreeNode* root) {
        if (root==NULL) return 0;
        int L=maxDepth(root->left)+1;
        int R=maxDepth(root->right)+1;
       if (L>R) return L; else return R;  
    }
