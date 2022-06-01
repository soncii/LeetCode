    void Tr(TreeNode* root, int sum, int target, bool &res) {
        if (root->left!=NULL) Tr(root->left, sum+root->val, target, res);
        if (root->right!=NULL) Tr(root->right, sum+root->val, target,res);
        if (root->left==NULL && root->right==NULL){
            if (sum+root->val==target) res=true;
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        bool res=false;
        if (root==NULL) return false;
        Tr(root,sum, targetSum,res);
        return res;
    }
