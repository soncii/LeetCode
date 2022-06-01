    bool searchBST(TreeNode* root, int val) {
        if (root==NULL) return false;
        if (root->val==val) return true;
        if (val>root->val) return searchBST(root->right, val);
        else return searchBST(root->left,val);
    }
    TreeNode* find(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool rp=searchBST(root->right, p->val);
        bool lp=searchBST(root->left,p->val);
        bool lq=searchBST(root->left,q->val);
        bool rq=searchBST(root->right,q->val);
        if (rp&&rq) return find(root->right,p,q);
        if (lp&&lq) return find(root->left,p,q);
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (searchBST(p,q->val)) return p;
        if (searchBST(q,p->val)) return q;
        return find(root,p,q);
    }
