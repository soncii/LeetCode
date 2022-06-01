    TreeNode* searchBST(TreeNode* root, int val) {
        if (root==NULL||root->val==val) return root;
        if (val>root->val) return searchBST(root->right, val);
        else return searchBST(root->left,val);
    }
