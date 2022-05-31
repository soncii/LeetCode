    void InOrder(TreeNode* root, vector<int> &res) {
        if (root->left!=NULL) InOrder(root->left, res);
        res.push_back(root->val);
        if (root->right!=NULL) InOrder(root->right, res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root==NULL) return res;
        InOrder(root,res);
        return res;
    }


void preOrder(TreeNode* root, vector<int>& ans){
    if(root == NULL)
        return ;
    ans.push_back(root->val);
    preOrder(root->left, ans);        
    preOrder(root->right, ans);
}
vector<int> preorderTraversal(TreeNode* root) {
    vector<int>ans;
    preOrder(root, ans);
    return ans;
}


    void PostOrder(TreeNode* root, vector<int>& res) {
        if (root->left != NULL) PostOrder(root->left, res);
        if (root->right!=NULL) PostOrder(root->right, res);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root==NULL) return res;
        PostOrder(root, res);
        return res;
    }
