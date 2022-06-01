    TreeNode* searchBST(TreeNode* root, int val) {
	        if (root==NULL||root->val==val) return root;
	        if (val>root->val) return searchBST(root->right, val);
	        else return searchBST(root->left,val);
	   }
    bool Traverse(TreeNode* root, TreeNode* anc, int k) {
        if (root==NULL) return false;
        TreeNode* t=searchBST(anc, k-root->val);
        if (t!=NULL && t!=root) return true;
        bool l=false,r=false;
        if (root->right!=NULL)  l=Traverse(root->right,anc,k);
        if (root->left!=NULL) r=Traverse(root->left,anc,k);
        return l||r;
    }
    bool findTarget(TreeNode* root, int k) {
        return Traverse(root,root,k);
    }
