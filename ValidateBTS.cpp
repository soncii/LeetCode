//     bool isValidBST(TreeNode* root) {
//         if (root==NULL) return true;
//         if (root->left!=NULL && root->left->val>=root->val) return false;
//         if (root->right!=NULL && root->right->val<=root->val) return false;
//         bool l=false,r=false;
//         //bool end=true;
//         l=isValidBST(root->left); //else end=!end;
//         r=isValidBST(root->right);// else end!=end;
//         return l&&r;
//     }
