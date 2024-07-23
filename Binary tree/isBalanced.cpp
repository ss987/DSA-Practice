int height(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        if(root->left==NULL &&root->right==NULL){
            return 1;
        }
        int l=height(root->left);
        int r=height(root->right);
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        int left = height(root->left);
        int right = height(root->right);
        if (abs(left - right) > 1)
            return false;
        else
            return true;
    }
