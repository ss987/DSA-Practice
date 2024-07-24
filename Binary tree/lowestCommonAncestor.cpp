TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int small=min(p->val,q->val);
        int large=max(p->val,q->val);
        while(1){
            if(root->val>large){
                root=root->left;
            }
            else if(root->val<small){
                root=root->right;
            }
            else{
                return root;
            }
        }
    }
