bool issame(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL || q==NULL){
            return false;
        }
        if(p->val!=q->val){
            return false;
        }
        return (issame(p->right,q->right)&& issame(p->left,q->left));
    }
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(root==NULL){
            return false;
        }
        if (issame(root, subroot)) {
            return true;
        }
        return (isSubtree(root->left, subroot) || isSubtree(root->right, subroot));
    }
